PORTNAME=	brotli
PORTVERSION=	1.0.9
DISTVERSIONPREFIX=	v
PORTEPOCH=	1
CATEGORIES=	archivers devel

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Generic-purpose lossless compression algorithm

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	google

USES=		autoreconf:build compiler:c++0x cpe gmake libtool pkgconfig
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPE_VENDOR=	google

INSTALL_TARGET=	install-strip
PLIST_SUB=	SHLIBVER=${PORTVERSION}

OPTIONS_DEFINE=	DOCS

pre-configure:
	(cd ${WRKSRC} && ./bootstrap)

.include <bsd.port.mk>
