PORTNAME=	Net-CLI-Interact
PORTVERSION=	2.300003
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Toolkit for CLI Automation

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Load>=0:devel/p5-Class-Load \
		p5-Class-Mix>=0:devel/p5-Class-Mix \
		p5-Config-Any>=0.27:devel/p5-Config-Any \
		p5-File-ShareDir>=1:devel/p5-File-ShareDir \
		p5-IO-Tty>=0:devel/p5-IO-Tty \
		p5-IPC-Run>=0:devel/p5-IPC-Run \
		p5-Log-Dispatch-Config>=0:devel/p5-Log-Dispatch-Config \
		p5-Log-Dispatch-Configurator-Any>=0:devel/p5-Log-Dispatch-Configurator-Any \
		p5-Moo>=0:devel/p5-Moo \
		p5-MooX-Types-MooseLike>=0:devel/p5-MooX-Types-MooseLike \
		p5-Net-Telnet>=0:net/p5-Net-Telnet \
		p5-Path-Class>=0:devel/p5-Path-Class

USES=		perl5
USE_PERL5=	modbuild

NO_ARCH=	yes

.include <bsd.port.mk>
