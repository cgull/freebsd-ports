PORTNAME=	normalize
PORTVERSION=	0.7.7
PORTREVISION=	11
CATEGORIES=	audio
MASTER_SITES=	SAVANNAH

MAINTAINER=	alex@fafula.com
COMMENT=	Tool for adjusting the volume of wave/MP3 files to a standard level

LIB_DEPENDS=	libmad.so:audio/libmad

USES=		shebangfix perl5 tar:bzip2 libtool
USE_PERL5=	run
GNU_CONFIGURE=		yes
CONFIGURE_ARGS=		--disable-helper-search
CPPFLAGS+=		-I${LOCALBASE}/include
LDFLAGS+=		-L${LOCALBASE}/lib
MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=	MP3 OGG FLAC NLS
OPTIONS_DEFAULT=	MP3
OPTIONS_SUB=	yes

MP3_RUN_DEPENDS+=	madplay:audio/madplay \
			lame:audio/lame
OGG_RUN_DEPENDS=	oggdec:audio/vorbis-tools
FLAC_RUN_DEPENDS=	flac:audio/flac
NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
