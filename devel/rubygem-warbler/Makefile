PORTNAME=	warbler
PORTVERSION=	2.0.5
PORTREVISION=	1
CATEGORIES=	devel rubygems java
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Constructor of .war files of Rails applications

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	jruby:lang/jruby \
		rubygem-jruby-jars>=9.0.0.0:devel/rubygem-jruby-jars \
		rubygem-jruby-rack>=1.1.1<1.3:www/rubygem-jruby-rack \
		rubygem-rake>=10.1.0:devel/rubygem-rake \
		rubygem-rubyzip13>=1.0<1.4:archivers/rubygem-rubyzip13

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/warble

.include <bsd.port.mk>
