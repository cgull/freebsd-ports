PORTNAME=	dry-types
PORTVERSION=	1.5.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Type system for Ruby supporting coercions, constraints and complex types

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-concurrent-ruby>=1.0<2:devel/rubygem-concurrent-ruby \
		rubygem-dry-container>=0.3<1:devel/rubygem-dry-container \
		rubygem-dry-core>=0.5<1:devel/rubygem-dry-core \
		rubygem-dry-inflector>=0.1.2<1:devel/rubygem-dry-inflector \
		rubygem-dry-logic>=1.0.2<2:devel/rubygem-dry-logic

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
