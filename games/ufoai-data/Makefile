PORTNAME=	data
PORTVERSION=	2.5
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	SF/ufoai/UFO_AI%202.x/${PORTVERSION}
PKGNAMEPREFIX=	ufoai-
DISTNAME=	${PKGNAMEPREFIX}${PORTVERSION}-${PORTNAME}
EXTRACT_SUFX=	.tar
DIST_SUBDIR=	${PKGNAMEPREFIX:S/-//}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	UFO alien invasion data files

# See http://ufoai.org/wiki/License
LICENSE=	GPLv2 CC-BY-SA-3.0
LICENSE_COMB=	multi

BROKEN_mips64=		Fails to install: runaway process

EXTRACT_DEPENDS=	${UNZIP_CMD}:archivers/unzip

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
NO_ARCH=	yes

DATADIR=	share/${PKGNAMEPREFIX:S/-//}
PLIST=		${WRKDIR}/pkg-plist

post-extract:
	@cd ${WRKSRC}/base && \
		${FIND} * -type f -exec ${UNZIP_CMD} {} -d ${WRKSRC}/base \;
	@${RM} ${WRKSRC}/base/*.pk3

pre-install:
	@${RM} ${PLIST}
	@cd ${WRKSRC}/base && \
		${FIND} * -type f | ${SORT} | ${SED} -e 's|^|%%DATADIR%%/base/|' >> ${PLIST}

do-install:
	cd ${WRKSRC}/base && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/${DATADIR}/base

.include <bsd.port.mk>
