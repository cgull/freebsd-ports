PORTNAME=	WWW-Myspace
PORTVERSION=	0.92
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Access MySpace.com profile information from Perl

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Config-General>=0:devel/p5-Config-General \
		p5-Contextual-Return>=0:devel/p5-Contextual-Return \
		p5-Params-Validate>=0:devel/p5-Params-Validate \
		p5-Spiffy>=0.24:devel/p5-Spiffy \
		p5-Time-modules>=100.010301:devel/p5-Time-modules \
		p5-URI>=0:net/p5-URI \
		p5-WWW-Mechanize>=1.2:www/p5-WWW-Mechanize \
		p5-YAML>=0.39:textproc/p5-YAML \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
