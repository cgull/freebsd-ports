PORTNAME=	MouseX-ConfigFromFile
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MASAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Abstract Mouse role for setting attributes from a configfile

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Filter>=0:devel/p5-Filter \
		p5-Mouse>=0.19:devel/p5-Mouse \
		p5-MouseX-Types-Path-Class>=0.05:devel/p5-MouseX-Types-Path-Class

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
