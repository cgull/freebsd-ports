PORTNAME=	scite
DISTVERSION=	4.4.5
CATEGORIES=	editors gnome
MASTER_SITES=	SF/scintilla/SciTE/${PORTVERSION}
DISTNAME=	${PORTNAME}${PORTVERSION:S/.//g}

MAINTAINER=	cyberbotx@cyberbotx.com
COMMENT=	Full-featured SCIntilla based text editor for GTK/GNOME

LICENSE=	SCINTILLA
LICENSE_NAME=	License for Scintilla and SciTE
LICENSE_FILE=	${WRKSRC}/../License.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

LIB_DEPENDS=	libscintilla.so:x11-toolkits/scintilla
RUN_DEPENDS=	xdg-open:devel/xdg-utils

USES=		compiler:c++17-lang desktop-file-utils gmake gnome pkgconfig tar:tgz

OPTIONS_DEFINE=	DOCS

PATCH_WRKSRC=	${WRKDIR}/${PORTNAME}
WRKSRC=		${WRKDIR}/${PORTNAME}/gtk

USE_GNOME=	cairo gdkpixbuf2 gtk30
MAKEFILE=	makefile
MAKE_ARGS=	GTK3=1
.if defined(WITH_DEBUG)
MAKE_ARGS+=	DEBUG=1
.endif

PORTDATA=	*.properties
PORTDOCS=	*.html *.jpg *.png

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == clang
MAKE_ARGS+=	CLANG=1
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|$$(SciteDefaultHome)|${DOCSDIR}|' \
		${WRKSRC}/../src/SciTEGlobal.properties

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/../bin/SciTE ${STAGEDIR}${PREFIX}/bin
	${LN} -sf SciTE ${STAGEDIR}${PREFIX}/bin/scite
	${INSTALL_MAN} ${WRKSRC}/../doc/scite.1 ${STAGEDIR}${MANPREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/SciTE.desktop ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKSRC}/Sci48M.png ${STAGEDIR}${PREFIX}/share/pixmaps
	(cd ${WRKSRC}/../src && ${COPYTREE_SHARE} "${PORTDATA}" ${STAGEDIR}${DATADIR})
	(cd ${WRKSRC}/../doc && ${COPYTREE_SHARE} "${PORTDOCS}" ${STAGEDIR}${DOCSDIR})

.include <bsd.port.post.mk>
