PORTNAME=	pgspecial
PORTVERSION=	1.13.1
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	1

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Meta-commands handler for Postgres Database

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=4.1:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psycopg2>=2.7.4:databases/py-psycopg2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlparse>=0.1.19:databases/py-sqlparse@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

PORTSCOUT=	limit:^1\.

.include <bsd.port.mk>
