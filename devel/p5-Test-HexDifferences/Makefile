PORTNAME=	Test-HexDifferences
PORTVERSION=	1.001
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Test binary as hexadecimal string

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Sub-Exporter>=0:devel/p5-Sub-Exporter \
		p5-Test-Differences>=0.60:devel/p5-Test-Differences \
		p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings \
		p5-Text-Diff>=0:textproc/p5-Text-Diff

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
