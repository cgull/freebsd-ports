PORTNAME=	Module-Depends
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Identify the dependencies of a distribution

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor-Chained>=0:devel/p5-Class-Accessor-Chained \
		p5-YAML>=0:textproc/p5-YAML

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
