PORTNAME=	HTML-Truncate
PORTVERSION=	0.20
PORTREVISION=	1
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Truncate HTML by character count while preserving well-formedness

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=2:www/p5-HTML-Parser \
		p5-HTML-Tagset>=3:www/p5-HTML-Tagset

USES=		perl5
USE_PERL5=	configure

post-patch:
	${RM} ${WRKSRC}/lib/HTML/Truncate.pm.orig

.include <bsd.port.mk>
