PORTNAME=	atslog
PORTVERSION=	2.1.1
PORTREVISION=	8
CATEGORIES=	comms
MASTER_SITES=	BERLIOS

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Software for collecting and analyzing calls from different PBX models

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		perl5 shebangfix
SHEBANG_FILES=	data/sql/install-sql.pl \
		include/atslogcleardb.pl.in include/atslogdb.pl.in
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--localstatedir=/var

USE_RC_SUBR=	${PORTNAME}d
PLIST_SUB=	WWWOWN="${WWWOWN}" WWWGRP="${WWWGRP}"

SUB_FILES=	pkg-message

PORTDOCS=	CHANGES ChangeLog DEINSTALL INSTALL TODO UPDATING USAGE

OPTIONS_DEFINE=		EXAMPLES LIBWRAP WWW WWWGD DOCS
OPTIONS_DEFAULT=	LIBWRAP MYSQL WWW WWWGD
OPTIONS_MULTI=		DB
OPTIONS_MULTI_DB=	PGSQL MYSQL
OPTIONS_SUB=		yes

LIBWRAP_DESC=	Enable TCP wrapper support
WWW_DESC=	Install web interface
WWWGD_DESC=	Graphic reports

MYSQL_USES=		mysql
MYSQL_BUILD_DEPENDS=	p5-DBD-mysql>=0:databases/p5-DBD-mysql
MYSQL_RUN_DEPENDS=	p5-DBD-mysql>=0:databases/p5-DBD-mysql

PGSQL_USES=		pgsql
PGSQL_BUILD_DEPENDS=	p5-DBD-Pg>=0:databases/p5-DBD-Pg
PGSQL_RUN_DEPENDS=	p5-DBD-Pg>=0:databases/p5-DBD-Pg

LIBWRAP_CONFIGURE_OFF=	--disable-libwrap

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MWWW}
USE_PHP=	pcre
USES+=		php:web
.if ${PORT_OPTIONS:MWWWGD}
USE_PHP+=	gd
.endif
.if ${PORT_OPTIONS:MMYSQL}
USE_PHP+=	mysqli
.endif
.if ${PORT_OPTIONS:MPGSQL}
USE_PHP+=	pgsql
.endif
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|createsqltables.|${DATADIR}/sql/createsqltables.|g' \
	    -e 's|data.sql|${DATADIR}/sql/data.sql|' ${WRKSRC}/data/sql/install-sql.pl

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${USE_RC_SUBR}/${USE_RC_SUBR} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${MANPREFIX}/man/man8
	@${MKDIR} ${STAGEDIR}${MANPREFIX}/man/ru.KOI8-R/man8
.for i in ${USE_RC_SUBR} ${PORTNAME}master
	${INSTALL_MAN} ${WRKSRC}/man/en/${i}.8 ${STAGEDIR}${MANPREFIX}/man/man8
	${INSTALL_MAN} ${WRKSRC}/man/ru.KOI8-R/${i}.8 ${STAGEDIR}${MANPREFIX}/man/ru.KOI8-R/man8
.endfor
	${INSTALL_DATA} ${WRKSRC}/include/${PORTNAME}.conf.default ${STAGEDIR}${PREFIX}/etc/${PORTNAME}.conf.sample
	${INSTALL_DATA} ${WRKSRC}/include/${PORTNAME}.conf.default.rus ${STAGEDIR}${PREFIX}/etc/${PORTNAME}.conf.rus.sample
.for i in atslogcleardb.pl atslogdb.pl atslogmaster
	${INSTALL_SCRIPT} ${WRKSRC}/include/${i} ${STAGEDIR}${PREFIX}/bin
.endfor
	@${MKDIR} ${STAGEDIR}${DATADIR}/lang
	(cd ${WRKSRC}/include && \
	${FIND} lang -type f ! -iregex ".*Makefile" -exec \
		${INSTALL_DATA} {} "${STAGEDIR}${DATADIR}/{}" \;)
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/textlogs
	(cd ${WRKSRC}/data && \
	${FIND} textlogs -type f -exec \
		${INSTALL_DATA} {} "${STAGEDIR}${EXAMPLESDIR}/{}" \;)
	@${MKDIR} ${STAGEDIR}${DATADIR}/sql
	(cd ${WRKSRC}/data && \
	${FIND} sql -type f -iregex ".*\.sql" -exec \
		${INSTALL_DATA} {} "${STAGEDIR}${DATADIR}/{}" \;)
	${INSTALL_SCRIPT} ${WRKSRC}/data/sql/install-sql.pl ${STAGEDIR}${DATADIR}/sql
	@${MKDIR} ${STAGEDIR}${PREFIX}/libexec/${PORTNAME}
	(cd ${WRKSRC}/libexec && \
	${FIND} -E . -type f ! -iregex ".*\.(sh|orig)" -exec \
		${INSTALL_DATA} {} "${STAGEDIR}${PREFIX}/libexec/${PORTNAME}/{}" \;)
	${INSTALL_SCRIPT} ${WRKSRC}/libexec/genindex.sh ${STAGEDIR}${PREFIX}/libexec/${PORTNAME}

	@${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC}/www && \
	${FIND} . -type d ! -empty -exec \
		${MKDIR} "${STAGEDIR}${WWWDIR}/{}" \; && \
	${FIND} -E . -type f ! -iregex "(.*Makefile|.*\.orig)" -exec \
		${INSTALL_DATA} {} "${STAGEDIR}${WWWDIR}/{}" \;
	${MV} ${STAGEDIR}${WWWDIR}/include/config.inc.php.default ${STAGEDIR}${WWWDIR}/include/config.inc.php.sample

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
