PORTNAME=	tkinfo
PORTVERSION=	2.11
CATEGORIES=	misc tk
MASTER_SITES=	http://math-www.uni-paderborn.de/~axel/tkinfo/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tk script to read GNU "info" files and display them

LICENSE=	MIT

USES+=		tk
NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/tkinfo \
		man/man1/tkinfo.1.gz

post-patch:
	@${REINPLACE_CMD} -e \
		's|/usr/local/info|${LOCALBASE}/info|; \
		 s|exec wish|exec ${WISH}|' ${WRKSRC}/tkinfo

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/tkinfo ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/tkinfo.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
