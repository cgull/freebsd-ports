PORTNAME=	Crypt-Dining
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	The Dining Cryptographers' Protocol

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-Random>=0:security/p5-Crypt-Random \
		p5-Net-Address-IPv4-Local>=0:net/p5-Net-Address-IPv4-Local

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
