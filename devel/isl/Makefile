PORTNAME=	isl
PORTVERSION=	0.24
CATEGORIES=	devel math
MASTER_SITES=	SOURCEFORGE/libisl

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Integer Set Library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgmp.so:math/gmp

USES=		libtool pkgconfig tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

INSTALL_TARGET=	install-strip
TEST_TARGET=	check

CONFIGURE_ARGS=	--with-gmp-prefix=${LOCALBASE}

OPTIONS_DEFINE=	OPTIMIZED_CFLAGS
OPTIONS_DEFAULT=OPTIMIZED_CFLAGS

OPTIMIZED_CFLAGS_CFLAGS=	-O3

.include <bsd.port.mk>
