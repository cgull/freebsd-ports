PORTNAME=	Cache-Memcached-XS
PORTVERSION=	0.01
PORTREVISION=	3
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Client library for memcached using libmemcache

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

LIB_DEPENDS=	libmemcache.so:databases/libmemcache

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include"

.include <bsd.port.mk>
