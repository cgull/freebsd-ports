PORTNAME=	Data-ICal
PORTVERSION=	0.24
CATEGORIES=	deskutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate iCalendar (RFC 2445) calendar files

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-Class-ReturnValue>=0:devel/p5-Class-ReturnValue \
		p5-Text-vFile-asData>=0:devel/p5-Text-vFile-asData
TEST_DEPENDS=	p5-Test-LongString>=0:devel/p5-Test-LongString \
		p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings \
		p5-Test-Pod>=1.14:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.04:devel/p5-Test-Pod-Coverage \
		p5-Test-Warn>=0:devel/p5-Test-Warn

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e '/^auto_install/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
