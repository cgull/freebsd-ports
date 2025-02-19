PORTNAME=	scalapack
PORTVERSION=	2.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	math

MAINTAINER=	ports@FreeBSD.org
COMMENT=	ScaLAPACK Scalable LAPACK library

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFLICTS=	elmer-mathlibs-1*

USE_GITHUB=	yes
GH_ACCOUNT=	Reference-ScaLAPACK

USES=		cmake:insource fortran pathfix

USE_LDCONFIG=	yes
CMAKE_ARGS_ST=	-DBUILD_STATIC_LIBS:BOOL=ON
CMAKE_ARGS_SH=	-DBUILD_SHARED_LIBS:BOOL=ON
CMAKE_ARGS=	${CMAKE_ARGS_ST}

ARCH2FIX=	PBLAS/SRC PBLAS/SRC/PBBLAS PBLAS/SRC/PTOOLS PBLAS/SRC/PTZBLAS \
		REDIST/SRC SRC TOOLS TOOLS/LAPACK

DATADIR=	${PREFIX}/share/${PORTNAME:tu}
EXAMPLESDIR=	${PREFIX}/share/examples/${PORTNAME:tu}
SUB_FILES=	pkg-message
PLIST_SUB=	SVERSION=${SVERSION} PORTVERSION=${PORTVERSION}

OPTIONS_DEFINE=		EXAMPLES
OPTIONS_RADIO=		LA MPI
OPTIONS_RADIO_LA=	ATLAS BLAS
LA_DESC=		Linear Algebra library support
BLAS_DESC=		LAPACK blass implementation
OPTIONS_RADIO_MPI=	MPICH OPENMPI
OPTIONS_DEFAULT=	BLAS EXAMPLES MPICH

ATLAS_USES=	blaslapack:atlas
BLAS_USES=	blaslapack:openblas

OPENMPI_BUILD_DEPENDS=	openmpi>0:net/openmpi
OPENMPI_RUN_DEPENDS=	openmpi>0:net/openmpi
OPENMPI_CMAKE_ON=	-DMPI_BASE_DIR=${LOCALBASE}/mpi/openmpi
OPENMPI_LDFLAGS=	-L${LOCALBASE}/mpi/openmpi/lib -Wl,-rpath,${LOCALBASE}/mpi/openmpi/lib -lmpi

MPICH_BUILD_DEPENDS=	${LOCALBASE}/bin/mpicc:net/mpich
MPICH_RUN_DEPENDS=	${LOCALBASE}/bin/mpicc:net/mpich
MPICH_CMAKE_ON=		-DMPI_BASE_DIR=${LOCALBASE}

.include <bsd.port.pre.mk>

BLAS=		${BLASLIB}
LAPACK=		${LAPACKLIB}

.if ${PORT_OPTIONS:MOPENMPI}
MPIF77=	${LOCALBASE}/mpi/openmpi/bin/mpif77
MPICC=	${LOCALBASE}/mpi/openmpi/bin/mpicc
.else
MPIF77=	${LOCALBASE}/bin/mpif77
MPICC=	${LOCALBASE}/bin/mpicc
.endif

.if ${ARCH} == "sparc64" || ${ARCH} == "amd64"
FPIC=	-fPIC
.else
FPIC=	-fpic
.endif

CFLAGS+=	${FPIC}
FFLAGS+=	${FPIC}
SVERSION=	2

.if ${GCC_DEFAULT} >= 10
# workaround for Rank mismatch between actual argument at (1) and actual argument at (2) (scalar and rank-1)
FFLAGS+=	-fallow-argument-mismatch
.endif

.if defined(WITH_OPTIMIZED_FLAGS)
.if ${ARCH} == "amd64"
FFLAGS+=	-pipe -O3 -ffast-math -funroll-all-loops -fpeel-loops -ftracer -funswitch-loops -funit-at-a-time
CFLAGS+=	-pipe -O3 -ffast-math -funroll-all-loops -fpeel-loops -ftracer -funswitch-loops -funit-at-a-time
.elif ${ARCH} == "i386"
FFLAGS+=	-O3 -ffast-math -finline-functions -fomit-frame-pointer -funroll-loops -fexpensive-optimizations -malign-double -mcpu=i686 -march=i686 -mfancy-math-387 -mpreferred-stack-boundary=3
CFLAGS+=	-O3 -ffast-math -finline-functions -fomit-frame-pointer -funroll-loops -fexpensive-optimizations -malign-double -mcpu=i686 -march=i686 -mfancy-math-387 -mpreferred-stack-boundary=3
.else
FFLAGS+=	-O3 -ffast-math -finline-functions -fomit-frame-pointer -funroll-loops -fexpensive-optimizations -Wno-multichar
CFLAGS+=	-O3 -ffast-math -finline-functions -fomit-frame-pointer -funroll-loops -fexpensive-optimizations -Wno-multichar
.endif
.endif

NOOPT=	-O0

# USES=fortran already forces FC to a supported fortran compiler;
# assume mpicc points to a compatible compiler and force that, too.
CC=	${MPICC}

pre-configure:
	${CP} -p ${WRKSRC}/Makefile ${WRKSRC}/Makefile.dist
	${CP} ${WRKSRC}/SLmake.inc.example ${WRKSRC}/SLmake.inc
	${REINPLACE_CMD} -e 's|@BLAS@|${BLAS}|g; s|@LAPACK@|${LAPACK}|g;s|@LAPACK@|${LAPACK}|g;s|@LAPACK@|${LAPACK}|g;s|@LAPACK@|${LAPACK}|g; s|@WRKSRC@|${WRKSRC}|g ; s|@LOCALBASE@|${LOCALBASE}|g ; s|@CC@|${CC}|g ; s|@CFLAGS@|${CFLAGS}|g ; s|@F77@|${F77}|g ; s|@MPIF77@|${MPIF77}|g ; s|@MPICC@|${MPICC}|g ; s|@FFLAGS@|${FFLAGS}|g ; s|@NOOPT@|${NOOPT}|g ; s|@F77EXTRAFLAGS@|${F77EXTRAFLAGS}|g ; s|^ARCH *.= ar|ARCMD = ar|' ${WRKSRC}/SLmake.inc
.for mkf in ${ARCH2FIX}
	${REINPLACE_CMD} -e 's|\$$(ARCH)|$$(ARCMD)|' ${WRKSRC}/${mkf}/Makefile
.endfor

post-build:
	${RM} -r ${WRKSRC}/CMakeFiles ${WRKSRC}/CMakeCache.txt
	${CP} -p ${WRKSRC}/Makefile.dist ${WRKSRC}/Makefile
	(cd ${WRKSRC} &&	\
	${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS:C|BUILD_STATIC_LIBS|BUILD_SHARED_LIBS|} ${CMAKE_SOURCE_PATH})
	(cd ${WRKSRC} && ${DO_MAKE_BUILD} ${ALL_TARGET})

post-install:
	${INSTALL_DATA} ${WRKSRC}/lib/libscalapack.a ${STAGEDIR}${PREFIX}/lib
	${MV} ${STAGEDIR}${PREFIX}/lib/libscalapack.so ${STAGEDIR}${PREFIX}/lib/libscalapack.so.${SVERSION}
	${LN} -sf libscalapack.so.${SVERSION} ${STAGEDIR}${PREFIX}/lib/libscalapack.so
	${MKDIR} ${STAGEDIR}${PREFIX}/share/SCALAPACK/TESTING
	(cd ${WRKSRC}/TESTING/ ;\
	${INSTALL_PROGRAM} x* ${STAGEDIR}${PREFIX}/share/SCALAPACK/TESTING ;\
	${INSTALL_DATA} *.dat ${STAGEDIR}${PREFIX}/share/SCALAPACK/TESTING)
	${INSTALL_DATA} ${FILESDIR}/scalapack.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/PBLAS/SRC/*.h ${STAGEDIR}${PREFIX}/include
.if ${PORT_OPTIONS:MEXAMPLES}
	${MKDIR} ${STAGEDIR}${PREFIX}/share/examples/SCALAPACK
	${INSTALL_DATA} ${FILESDIR}/Makefile    ${STAGEDIR}${PREFIX}/share/examples/SCALAPACK
	${INSTALL_DATA} ${FILESDIR}/example1.cc ${STAGEDIR}${PREFIX}/share/examples/SCALAPACK
	${INSTALL_DATA} ${FILESDIR}/example1.f  ${STAGEDIR}${PREFIX}/share/examples/SCALAPACK
.endif

.if defined(MAINTAINER_MODE)
do-test:
. if !exists(${HOME}/.mpd.conf)
	@${ECHO_CMD} "MPD_SECRETWORD=change_on_install" > ${HOME}/.mpd.conf
	${CHMOD} go-r ${HOME}/.mpd.conf
	@${ECHO_MSG} "${HOME}/.mpd.conf has been generated - please change the secret word!"
. endif
	(cd ${BUILD_WRKSRC}/TESTING && ${MAKE_CMD} test)

.endif

.include <bsd.port.post.mk>
