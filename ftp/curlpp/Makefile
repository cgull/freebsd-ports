PORTNAME=	curlpp
PORTVERSION=	0.8.1
DISTVERSIONPREFIX=	v
PORTREVISION=	4
CATEGORIES=	ftp

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	C++ wrapper for libcurl

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/doc/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl

OPTIONS_DEFINE=	DOCS EXAMPLES

USES=		cmake compiler:c++11-lang localbase pathfix

USE_LDCONFIG=	yes

GH_ACCOUNT=	jpbarrette
USE_GITHUB=	yes

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/doc/guide.pdf ${STAGEDIR}${DOCSDIR}/

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_DATA} ${WRKSRC}/examples/README ${WRKSRC}/examples/example*.cpp ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.mk>
