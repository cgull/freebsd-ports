PORTNAME=	CGI-Application-Plugin-ValidateRM
PORTVERSION=	2.5
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Help validate forms with the CGI::Application framework

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-FillInForm>=0:www/p5-HTML-FillInForm \
		p5-Data-FormValidator>=0:textproc/p5-Data-FormValidator \
		p5-CGI-Application>=0:www/p5-CGI-Application

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
