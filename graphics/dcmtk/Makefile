PORTNAME=	dcmtk
DISTVERSIONPREFIX=	${PORTNAME:tu}-
DISTVERSION=	3.6.7
CATEGORIES=	graphics devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	DICOM ToolKit, libraries and applications for DICOM/MEDICOM standard

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

BROKEN_aarch64=	clang-14 crashes, see bug#264408

LIB_DEPENDS=	libicuuc.so:devel/icu \
		libpng.so:graphics/png \
		libtiff.so:graphics/tiff

USES=		compiler:c++11-lang cmake cpe gnome jpeg ssl
CPE_VENDOR=	offis
USE_GITHUB=	yes
GH_ACCOUNT=	${PORTNAME:tu}
USE_GNOME=	libxml2
USE_LDCONFIG=	yes

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	DCMTK_WITH_DOXYGEN

OPTIONS_DEFINE=	DOCS

PORTDOCS=	*

TEST_TARGET=	test test-exhaustive

.include <bsd.port.mk>
