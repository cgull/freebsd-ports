PORTNAME=	Catalyst-Plugin-SmartURI
PORTVERSION=	0.041
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	oleg@mamontov.net
COMMENT=	Configurable URIs for Catalyst

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=0:www/p5-Catalyst-Runtime	\
		p5-Class-C3-Componentised>=0:devel/p5-Class-C3-Componentised	\
		p5-Class-Load>=0:devel/p5-Class-Load		\
		p5-Moose>=0:devel/p5-Moose			\
		p5-URI-SmartURI>=0:net/p5-URI-SmartURI

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
