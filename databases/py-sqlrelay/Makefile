PORTNAME=	${SQLRELAY_PORTNAME}
PORTVERSION=	${SQLRELAY_PORTVERSION}
CATEGORIES=	databases python
MASTER_SITES=	# none
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTFILES=	# none

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Python modules to access to SQL Relay

EXTRACT_DEPENDS=	${NONEXISTENT}:${SQLRELAY_PORTDIR}:patch
LIB_DEPENDS=	libsqlrclient.so:${SQLRELAY_PORTDIR}

USES=		gmake libtool perl5 python
USE_PERL5=	build patch

WRKSRC=		${WRKDIR}/${PORTNAME}
BUILD_WRKSRC=	${WRKSRC}/src/api/python
INSTALL_WRKSRC=	${BUILD_WRKSRC}
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	${SQLRELAY_CONFIGURE_ARGS} \
		--with-python-prefix="${LOCALBASE}"

.include "${.CURDIR}/../sqlrelay/Makefile.common"

do-extract:
	${MKDIR} ${WRKDIR}
	${LN} -fs `${SQLRELAY_WRKSRC_CMD}` ${WRKSRC}

post-patch:
	${PERL} -i -p \
		-e 's,"2\.4" "2\.3" "2\.2" "2\.1",${PYTHON_VERSION:S/^python//},g;' \
			${WRKSRC}/configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/SQLRelay/CSQLRelay*.so

.include <bsd.port.mk>
