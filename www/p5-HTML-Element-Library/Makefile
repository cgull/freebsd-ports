PORTNAME=	HTML-Element-Library
PORTVERSION=	5.220000
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTML::Element convenience functions

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Array-Group>=0:devel/p5-Array-Group \
		p5-Data-Rmap>=0:devel/p5-Data-Rmap \
		p5-HTML-FillInForm>=0:www/p5-HTML-FillInForm \
		p5-HTML-Tree>=0:www/p5-HTML-Tree \
		p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-List-Rotation-Cycle>=0:devel/p5-List-Rotation-Cycle \
		p5-Params-Validate>=0:devel/p5-Params-Validate \
		p5-Scalar-Listify>=0:devel/p5-Scalar-Listify
TEST_DEPENDS=	p5-File-Slurp>=0:devel/p5-File-Slurp \
		p5-Test-XML>=0:devel/p5-Test-XML

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
