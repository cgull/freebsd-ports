PORTNAME=	nget
PORTVERSION=	0.27.1
DISTVERSIONSUFFIX=	+uulib
PORTREVISION=	7
CATEGORIES=	news
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Auto-resuming command line NNTP file grabber

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c++11-lang gmake
GNU_CONFIGURE=	yes

# Skip check if the C++ compiler supports exceptions.  We know both
# Clang and GCC do.  The configure test fails on FreeBSD 10.3 because
# it passes -fhandle-exceptions to the compiler and Clang 3.4.1 does
# not know to ignore it yet.
CONFIGURE_ARGS=	my_cv_exceptions=1

OPTIONS_DEFINE=	DOCS

WRKSRC=	${WRKDIR}/nget-${PORTVERSION}

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == gcc
CXXFLAGS+=	-std=c++11
.else
CXXFLAGS+=	-std=c++98
.endif
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nget ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/ngetlite ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/nget.1 ${STAGEDIR}${MANPREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/ngetlite.1 ${STAGEDIR}${MANPREFIX}/man/man1

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in README FAQ
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.post.mk>
