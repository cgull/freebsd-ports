PORTNAME=	Crypt_RSA
PORTVERSION=	1.2.1
PORTREVISION=	1
CATEGORIES=	security www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR class allows you to use two-key strong cryptography

USES=		pear

OPTIONS_DEFINE=	BCMATH GMP
BCMATH_DESC=	PHP BCMath extension support
GMP_DESC=	PHP GMP extension support

BCMATH_USES=	php
BCMATH_USE=	PHP=bcmath
GMP_USES=	php
GMP_USE=	PHP=gmp

.include <bsd.port.mk>
