PORTNAME=	Acme-HTTP
PORTVERSION=	0.10
CATEGORIES=	net www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	High-level access to Net::HTTP::NB and Net::HTTPS::NB

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-HTTP>=0:net/p5-Net-HTTP \
		p5-Net-HTTPS-NB>=0:net/p5-Net-HTTPS-NB

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
