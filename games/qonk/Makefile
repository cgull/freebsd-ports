PORTNAME=	qonk
PORTVERSION=	0.3.1
PORTREVISION=	15
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Small space build and conquer strategy game

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		gmake localbase sdl
USE_SDL=	sdl gfx ttf image

post-patch:
	@${REINPLACE_CMD} -e 's|-lSDL |`${SDL_CONFIG} --libs` |' \
		${CONFIGURE_WRKSRC}/${CONFIGURE_SCRIPT}
	@${REINPLACE_CMD} -e 's|settings.h|../&|; s|canvas.h|../&|' \
		${WRKSRC}/src/ui/menusystem.cpp

.include <bsd.port.mk>
