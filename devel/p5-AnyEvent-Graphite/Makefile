PORTNAME=	AnyEvent-Graphite
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Non-blocking Graphite client

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-AnyEvent>=4.15:devel/p5-AnyEvent \
		p5-AnyEvent-SNMP>=1.0:net-mgmt/p5-AnyEvent-SNMP

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
