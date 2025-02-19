PORTNAME=	psi88
PORTVERSION=	1.0
PORTREVISION=	16
CATEGORIES=	biology
MASTER_SITES=	http://www.ccl.net/cca/software/SOURCES/FORTRAN/psi88/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plotting wavefunctions (molecular orbitals) in 3D

USES=		fortran tar:Z
MAKE_ARGS=	BIN=${STAGEDIR}${PREFIX}/bin
FFLAGS+=	-std=legacy

PLIST_FILES=	bin/PSI1 bin/PSICON bin/PSI2CT bin/PSI2HP bin/PSI2PS bin/PSI2 \
		bin/PREPLOT bin/preplot bin/rpsi1 bin/rpsi2 bin/rpsicon
PORTDOCS=	README psi88.doc
PORTEXAMPLES=	*

OPTIONS_DEFINE=	DOCS EXAMPLES

post-patch:
	@${REINPLACE_CMD} -e 's/f77/$${FC}/' -e 's/LFLAGS/LDFLAGS/' \
		${WRKSRC}/src/makefile
	@${CP} ${FILESDIR}/Makefile.top ${WRKSRC}/Makefile

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/P*
	${LN} -s PSI2PS ${STAGEDIR}${PREFIX}/bin/PSI2
	${INSTALL_SCRIPT} ${WRKSRC}/unix/preplot ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/unix/rpsi1 ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/unix/rpsi2 ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/unix/rpsicon ${STAGEDIR}${PREFIX}/bin

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/psi88.doc ${STAGEDIR}${DOCSDIR}

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
