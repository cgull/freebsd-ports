PORTNAME=	train-winrm
PORTVERSION=	0.2.11
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Allow applictaions using Train to speak to Windows using Remote Management

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-winrm>=2.0<3:sysutils/rubygem-winrm \
		rubygem-winrm-elevated>=1.2.2<1.3:sysutils/rubygem-winrm-elevated \
		rubygem-winrm-fs>=1.0<2:sysutils/rubygem-winrm-fs

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
