PORTNAME=	dtdparse
PORTVERSION=	2.00
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF
DISTNAME=	SGML-DTDParse-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Parse a DTD and produce an XML document that represents it

RUN_DEPENDS=	p5-DelimMatch>=0:textproc/p5-DelimMatch \
		p5-XML-DOM>=0:textproc/p5-XML-DOM

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

CONFLICTS_INSTALL=	p5-SGML-DTDParse # bin/dtddiff bin/dtddiff2html bin/dtdflatten bin/dtdformat bin/dtdparse

.include <bsd.port.mk>
