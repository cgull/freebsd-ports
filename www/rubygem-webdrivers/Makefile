PORTNAME=	webdrivers
PORTVERSION=	5.0.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Run Selenium tests more easily with install and updates for all supported webdrivers

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-nokogiri>=1.6<2:textproc/rubygem-nokogiri \
		rubygem-rubyzip>=1.3.0:archivers/rubygem-rubyzip \
		rubygem-selenium-webdriver>=4.0<5:www/rubygem-selenium-webdriver

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/console ${STAGEDIR}${PREFIX}/bin/setup

.include <bsd.port.mk>
