PORTNAME=	gpicview
PORTVERSION=	0.2.5
CATEGORIES=	graphics
MASTER_SITES=	SF/lxde/GPicView%20%28image%20Viewer%29/${PORTVERSION:R}.x/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple and fast image viewer for X11

LICENSE=	GPLv2

USES=		desktop-file-utils gettext-tools gmake gnome jpeg localbase \
		pkgconfig tar:xz xorg
USE_GNOME=	gtk20 intltool
USE_XORG=	x11

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
