PORTNAME=	Glade
PORTVERSION=	1.007
PORTREVISION=	7
CATEGORIES=	x11-toolkits gnome perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TSCH
PKGNAMEPREFIX=	p5-
PKGNAMESUFFIX=	2
DISTNAME=	Gtk2-GladeXML-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Gtk2-Perl bindings to libglade2

LICENSE=	GPLv2

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0:devel/p5-ExtUtils-Depends \
		p5-Cairo>=0:graphics/p5-Cairo \
		p5-Gtk2>=0:x11-toolkits/p5-Gtk2 \
		p5-ExtUtils-PkgConfig>=0:devel/p5-ExtUtils-PkgConfig
RUN_DEPENDS=	p5-Gtk2>=0:x11-toolkits/p5-Gtk2

USES=		gnome perl5
USE_GNOME=	libglade2
USE_PERL5=	configure

.include <bsd.port.mk>
