PORTNAME=	W3C-LinkChecker
PORTVERSION=	4.81
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SCOP
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Checks the validity of links in an HTML or XHTML document

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CSS-DOM>=0.09:www/p5-CSS-DOM \
		p5-Config-General>=0:devel/p5-Config-General \
		p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-Net-IP>=0:net-mgmt/p5-Net-IP \
		p5-Term-ReadKey>=0:devel/p5-Term-ReadKey \
		p5-URI>=0:net/p5-URI \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
