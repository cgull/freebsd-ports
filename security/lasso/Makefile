PORTNAME=	lasso
PORTVERSION=	2.8.0
PORTREVISION=	2
CATEGORIES=	security
MASTER_SITES=	https://dev.entrouvert.org/releases/lasso/

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Free Liberty Alliance Implementation

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}
LIB_DEPENDS=	libltdl.so:devel/libltdl \
		libxmlsec1-openssl.so:security/xmlsec1
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		cpe gnome libtool pkgconfig python ssl
CPE_VENDOR=	entrouvert
USE_GNOME=	glib20 libxml2 libxslt
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-java \
		--disable-php5 \
		--with-zlib

INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	DOCS PERL PYTHON
OPTIONS_SUB=	yes

PERL_USES=			perl5
PERL_CONFIGURE_ENABLE=		perl
PYTHON_CONFIGURE_ENABLE=	python

post-patch:
	@${REINPLACE_CMD} -E 's,(xmlsec1-openssl >= 1\.2\.6) openssl,\1,' \
		${CONFIGURE_WRKSRC}/configure

.include <bsd.port.mk>
