PORTNAME=	Heap-Simple-XS
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	XS implementation of the Heap::Simple interface

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Heap-Simple>=0:devel/p5-Heap-Simple

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	-n

.include <bsd.port.mk>
