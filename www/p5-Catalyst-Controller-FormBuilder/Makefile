PORTNAME=	Catalyst-Controller-FormBuilder
PORTVERSION=	0.06
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MSTROUT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Catalyst FormBuilder Base Controller

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CGI-FormBuilder>=3.02:www/p5-CGI-FormBuilder \
		p5-Catalyst-Runtime>=5.7:www/p5-Catalyst-Runtime \
		p5-Class-Data-Inheritable>=0.04:devel/p5-Class-Data-Inheritable \
		p5-Class-Inspector>=1.13:devel/p5-Class-Inspector \
		p5-MRO-Compat>=0.09:devel/p5-MRO-Compat \
		p5-Tie-IxHash>=1.21:devel/p5-Tie-IxHash
TEST_DEPENDS=	p5-Test-WWW-Mechanize-Catalyst>=0.37:devel/p5-Test-WWW-Mechanize-Catalyst

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
