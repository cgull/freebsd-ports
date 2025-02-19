PORTNAME=	hedgewars
PORTVERSION=	1.0.0
PORTREVISION=	5
CATEGORIES=	games
MASTER_SITES=	http://www.hedgewars.org/download/releases/ \
		http://mirror.amdmi3.ru/distfiles/
PKGNAMESUFFIX=	-server
DISTNAME=	${PORTNAME}-src-${DISTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Server part of free Worms-like turn based strategy game

LICENSE=	GPLv2

BUILD_DEPENDS=	ghc-8.10.7:lang/ghc810

USES=		cabal:nodefault tar:bzip2

WRKSRC_SUBDIR=	gameServer

USE_CABAL=	ConfigFile-1.1.4 \
		MissingH-1.4.3.0 \
		SHA-1.6.4.4 \
		aeson-1.5.2.0 \
		assoc-1.0.1_1 \
		attoparsec-0.13.2.4 \
		base-compat-0.11.1 \
		base-compat-batteries-0.11.1 \
		base-orphans-0.8.2 \
		bifunctors-5.5.7 \
		cabal-doctest-1.0.8_1 \
		comonad-5.0.6_1 \
		conduit-1.3.2 \
		distributive-0.6.2_1 \
		dlist-0.8.0.8 \
		entropy-0.4.1.6 \
		hashable-1.3.0.0_1 \
		hslogger-1.3.1.0_1 \
		integer-logarithms-1.0.3_2 \
		libyaml-0.1.2 \
		mono-traversable-1.0.15.1 \
		network-2.8.0.1 \
		old-locale-1.0.0.7_2 \
		old-time-1.1.0.3_2 \
		primitive-0.7.0.1 \
		random-1.1_1 \
		regex-base-0.94.0.0_1 \
		regex-compat-0.95.2.0_1 \
		regex-posix-0.96.0.0_1 \
		regex-tdfa-1.3.1.0_1 \
		resourcet-1.2.4.1 \
		sandi-0.5_1 \
		scientific-0.3.6.2 \
		split-0.2.3.4 \
		tagged-0.8.6_2 \
		th-abstraction-0.3.2.0 \
		these-1.1 \
		time-compat-1.9.3 \
		transformers-compat-0.6.5 \
		unliftio-core-0.2.0.1_1 \
		unordered-containers-0.2.11.0 \
		utf8-string-1.0.1.1_3 \
		uuid-types-1.0.3_2 \
		vector-0.12.1.2 \
		vector-algorithms-0.8.0.3 \
		yaml-0.11.4.0 \
		zlib-0.6.2.1_1

EXECUTABLES=	hedgewars-server checker

.include <bsd.port.mk>
