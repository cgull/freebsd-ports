PORTNAME=	cutegram
PORTVERSION=	2.7.1
DISTVERSIONPREFIX=	v
DISTVERSIONSUFFIX=	-stable
PORTREVISION=	3
CATEGORIES=	net-im

MAINTAINER=	henry.hu.sh@gmail.com
COMMENT=	Free and opensource telegram client

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libqtelegram-ae.so:net-im/libqtelegram-ae \
		libtelegramqml.so:net-im/telegramqml

USE_GITHUB=	yes
GH_ACCOUNT=	Aseman-Land
GH_PROJECT=	Cutegram aseman-qt-tools:tools
GH_TAGNAME=	91bf14b:tools
GH_SUBDIR=	Cutegram/asemantools:tools

USES=		compiler:c++11-lang desktop-file-utils gnome qmake:outsource \
		qt:5 ssl
USE_QT=		qmake_build buildtools_build core declarative sql xml multimedia \
		widgets dbus webkit quickcontrols graphicaleffects sql-sqlite3
QMAKE_ARGS=	LIBQTELEGRAM_INCLUDE_PATH="${LOCALBASE}/include/libqtelegram-ae" \
		TELEGRAMQML_INCLUDE_PATH="${LOCALBASE}/include/telegramqml"

post-patch:
	@${REINPLACE_CMD} -e "/isEmpty(OPENSSL_INCLUDE_PATH)/d" \
               ${WRKSRC}/Cutegram/Cutegram.pro

.include <bsd.port.mk>
