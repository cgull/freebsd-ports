PORTNAME=	servlet-api
PORTVERSION=	2.5
PORTREVISION=	3
CATEGORIES=	www java
MASTER_SITES=	http://maven.ibiblio.org/maven2/javax/servlet/servlet-api/2.5/ \
		http://repo1.maven.org/maven2/javax/servlet/servlet-api/2.5/
EXTRACT_SUFX=	.jar
EXTRACT_ONLY=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The Servlet API

USE_JAVA=	yes
NO_BUILD=	yes

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar

do-install:
	${INSTALL_DATA} ${_DISTDIR}/${DISTFILES} \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

.include <bsd.port.mk>
