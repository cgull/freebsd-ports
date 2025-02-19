PORTNAME=	libepoll-shim
DISTVERSIONPREFIX=	v
DISTVERSION=	0.0.20220703
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Small epoll implementation using kqueue

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c11
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	jiixyj
GH_PROJECT=	epoll-shim
PLIST_SUB=	SHIM_EVENTFD="${exists(/usr/include/sys/eventfd.h):?@comment :}"

do-test:
	# Exclude certain tests in resource restricted environments
	@(if [ `ulimit -n` -lt 20100 ]; then \
	    ${ECHO} "Skipping test perf-many-fds.perf_many_fds__perf"; \
	    SKIP_TESTS="-E ^(perf-many-fds.perf_many_fds__perf"; \
	    if [ `ulimit -n` -lt 1100 ]; then \
	        ${ECHO} "Skipping test timerfd-test.timerfd__many_timers"; \
	        SKIP_TESTS=$$SKIP_TESTS"|timerfd-test.timerfd__many_timers"; \
	    fi; \
	    SKIP_TESTS=$$SKIP_TESTS")$$"; \
	fi; \
	cd ${TEST_WRKSRC} && \
	${SETENV} ${TEST_ENV} ctest -C ${CMAKE_BUILD_TYPE} $$SKIP_TESTS)

.include <bsd.port.mk>
