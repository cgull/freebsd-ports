PORTNAME=	lxqt-config
PORTVERSION=	1.1.0
CATEGORIES=	sysutils
MASTER_SITES=	LXQT
DIST_SUBDIR=	lxqt

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	LXQt system settings center

LICENSE=	GPLv2 LGPL21+
LICENSE_COMB=	multi

BUILD_DEPENDS=	${LOCALBASE}/lib/xorg/modules/input/libinput_drv.so:x11-drivers/xf86-input-libinput
LIB_DEPENDS=	libudev.so:devel/libudev-devd

USES=	cmake compiler:c++14-lang kde:5 localbase:ldflags lxqt qt:5 \
	pkgconfig tar:xz xorg gnome
USE_QT=	buildtools_build qmake_build concurrent core dbus \
	gui linguisttools svg widgets x11extras xml
USE_KDE=	libkscreen windowsystem
USE_GNOME=	glib20
USE_LXQT=	buildtools lxqt
USE_XORG=	ice sm x11 xcb xcursor xext xfixes xrandr xi
USE_LDCONFIG=	yes

.include <bsd.port.mk>
