PORTNAME=	twitter4r
PORTVERSION=	0.7.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Twitter client API in pure Ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-json>=1.1.1:devel/rubygem-json \
		rubygem-oauth>=0.4.1:net/rubygem-oauth

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/t4r-oauth-access bin/t4rsh

.include <bsd.port.mk>
