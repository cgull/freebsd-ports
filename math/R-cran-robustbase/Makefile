PORTNAME=	robustbase
DISTVERSION=	0.95-0
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Basic Robust Statistics

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-DEoptimR>0:math/R-cran-DEoptimR
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
