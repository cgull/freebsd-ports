PORTNAME=	Module-Build-Convert
PORTVERSION=	0.49
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Makefile.PL to Build.PL converter

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-HomeDir>=0:devel/p5-File-HomeDir \
		p5-File-Slurp>=0:devel/p5-File-Slurp \
		p5-IO-Prompt>=0:devel/p5-IO-Prompt \
		p5-PPI>=0:textproc/p5-PPI
TEST_DEPENDS=	p5-Test-Pod>=1.14:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.04:devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
