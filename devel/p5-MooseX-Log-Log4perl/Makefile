PORTNAME=	MooseX-Log-Log4perl
PORTVERSION=	0.47
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Logging role for Moose based on Log::Log4perl

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Any-Moose>=0.12:devel/p5-Any-Moose \
		p5-Log-Log4perl>=1.13:devel/p5-Log-Log4perl
TEST_DEPENDS=	p5-IO-Stringy>=0:devel/p5-IO-Stringy \
		p5-Moose>=0.65:devel/p5-Moose

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -i '' -e '/auto_install;/d' \
		${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
