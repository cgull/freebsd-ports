PORTNAME=	gzstream
DISTVERSION=	1.5
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	http://www.cs.unc.edu/Research/compgeom/gzstream/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Provides zlib functionality in an iostream

LICENSE=	LGPL21

USES=		tar:tgz

USE_LDCONFIG=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}
PLIST_FILES=	lib/lib${PORTNAME}.so lib/lib${PORTNAME}.so.0 \
		include/${PORTNAME}.h
ALL_TARGET=	default
CFLAGS+=	-fPIC -iquote.

post-patch:
	@${REINPLACE_CMD} -e 's/=/?=/;s/\.a/.so/g;s/CPPFL/CXXFL/g;\
		s/{AR}/{CXX} $${LDFLAGS} -lz -shared -Wl,-soname=lib${PORTNAME}.so.0 -o/' ${WRKSRC}/${MAKEFILE}
	@${REINPLACE_CMD} -e '/gzstream\.h/y/<>/""/' ${WRKSRC}/gzstream.C

do-install:
	${INSTALL_LIB} ${WRKSRC}/lib${PORTNAME}.so ${STAGEDIR}${PREFIX}/lib/lib${PORTNAME}.so.0
	${LN} -sf lib${PORTNAME}.so.0 ${STAGEDIR}${PREFIX}/lib/lib${PORTNAME}.so
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.h ${STAGEDIR}${PREFIX}/include/

.include <bsd.port.mk>
