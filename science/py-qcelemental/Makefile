PORTNAME=	qcelemental
DISTVERSION=	0.25.0
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Essentials for quantum chemistry

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}pint>=0.10.0:devel/py-pint@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pydantic>=1.8.2:devel/py-pydantic@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>=4.0.0:devel/py-pytest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-cov>0:devel/py-pytest-cov@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}py3Dmol>0:science/py-py3Dmol@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}msgpack>0:devel/py-msgpack@${PY_FLAVOR}

USES=		python:3.8+
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

do-test: # 2 tests fail, see https://github.com/MolSSI/QCElemental/issues/293
	@cd ${WRKSRC} && ${SETENV} ${TEST_ENV} pytest -rs --pyargs qcelemental

.include <bsd.port.mk>
