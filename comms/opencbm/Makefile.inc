OCBM_VERSION=	0.4.99.104
DISTVERSIONPREFIX=	v
DISTINFO_FILE=	${.CURDIR}/../opencbm/distinfo

USE_GITHUB=	yes
GH_ACCOUNT=	OpenCBM
GH_PROJECT=	OpenCBM

MAKEFILE?=	LINUX/Makefile
MAKE_ARGS=	CC="${CC}" \
		INFODIR=${PREFIX}/${INFO_PATH} \
		SUBDIRS_PLUGIN_XA1541=opencbm/lib/plugin/xa1541
MAKE_ENV=	USER_CFLAGS="${CFLAGS}"

PLIST_SUB=	OCBM_VERSION=${OCBM_VERSION}

PORTSCOUT=	limit:\d\.\d

PLUGINBASENAME=	${PREFIX}/lib/opencbm/plugin/libopencbm-
