PORTNAME=	aws-ses
PORTVERSION=	0.7.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Client library for REST API of Amazon SES

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-builder>=0:devel/rubygem-builder \
		rubygem-mail>=2.2.5:mail/rubygem-mail \
		rubygem-mime-types>=0:misc/rubygem-mime-types \
		rubygem-xml-simple>=0:textproc/rubygem-xml-simple

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
