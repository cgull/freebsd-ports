PORTNAME=	gsimplecal
DISTVERSIONPREFIX=	v
DISTVERSION=	2.4.1
PORTREVISION=	1
CATEGORIES=	deskutils

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	Lightweight calendar applet written in C++ using GTK

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf compiler:c++11-lang gmake gnome pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	dmedvinsky
USE_GNOME=	glib20 gtk30

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/gsimplecal \
		man/man1/gsimplecal.1.gz

.include <bsd.port.mk>
