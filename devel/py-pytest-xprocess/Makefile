PORTNAME=	pytest-xprocess
PORTVERSION=	0.19.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	loader@FreeBSD.org
COMMENT=	Pytest plugin to manage external processes across test runs

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>=0:devel/py-setuptools_scm@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>=2.8:devel/py-pytest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>0:sysutils/py-psutil@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	autoplist distutils pytest

TEST_ENV+=	PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

NO_ARCH=	yes

.include <bsd.port.mk>
