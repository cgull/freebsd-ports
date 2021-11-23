# Created by: John Hood <cgull@glup.org>

PORTNAME=	tlsh
DISTVERSION=	4.11.2
CATEGORIES=	devel

MAINTAINER=	cgull@glup.org
COMMENT=	Trend Micro Locality Sensitive Hash library and utilities

LICENSE=	APACHE20 BSD3CLAUSE
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:testing
USE_GITHUB=	yes
GH_ACCOUNT=	trendmicro
USE_LDCONFIG=	yes

CMAKE_ARGS=	tlsh \
		tlsh_unittest \
		-DTLSH_SHARED_LIBRARY=1
#CMAKE_ON=	TLSH_SHARED_LIBRARY

PORTDOCS=	README.md TLSH_Introduction.pdf TLSH_CTC_final.pdf

# XXX Testing/test.sh is too dumb to work with separated source and
# build directories.
TEST_TARGET=	test

_TLSH_VERSION=	${PORTVERSION}
_SHLIBVERMAJ=	${DISTVERSION:S/./ /g:[1]}
PLIST_SUB=	SHLIBVER=${DISTVERSION} \
		SHLIBVERMAJ=${_SHLIBVERMAJ} \
		TLSH_VERSION=${_TLSH_VERSION}

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
