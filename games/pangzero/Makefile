PORTNAME=	pangzero
PORTVERSION=	1.3
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	SF \
		SF/nemysisfreebsdp/${CATEGORIES}/:icons
DISTFILES=	${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX} \
		${PORTNAME}_icons${EXTRACT_SUFX}:icons

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Clone of Super Pang

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	p5-SDL>=0:devel/p5-SDL

NO_ARCH=	yes
NO_BUILD=	yes
USES=		perl5

PORTDOCS=	AUTHORS ChangeLog README

OPTIONS_DEFINE=	DOCS

SUB_FILES=	${PORTNAME}

DESKTOP_ENTRIES="Pang Zero" "" "${PORTNAME}" \
		"${PORTNAME}" "Game;ActionGame;" ""

post-extract:
	@${FIND} ${WRKSRC} -name "Makefile*" -delete
.for f in *.png *.jpg
	@${CP} -a ${WRKDIR}/${f} ${WRKSRC}/data
.endfor

do-install:
	@${REINPLACE_CMD} -e 's|%%PERL%%|${PERL}|' \
		${WRKDIR}/${PORTNAME}
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} "bin data" ${STAGEDIR}${DATADIR})

	${LN} -sf ${DATADIR}/data/icon.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/${PORTNAME}.png

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
