# This file is part of the OpenADK project. OpenADK is copyrighted
# material, please see the LICENCE file in the top-level directory.

PKG_NAME:=		uClibc-ng
ifeq ($(ADK_LIBC_VERSION),git)
ifeq ($(ADK_TARGET_LIB_UCLIBC_NG_GIT_REF),)
PKG_VERSION:=		git
else
PKG_VERSION:=		$(ADK_TARGET_LIB_UCLIBC_NG_GIT_REF)
PKG_GIT:=		hash
endif
PKG_RELEASE:=		1
PKG_SITES:=		$(ADK_TARGET_LIB_UCLIBC_NG_GIT_REPO)
endif
ifeq ($(ADK_TARGET_LIB_UCLIBC_NG_1_0_60),y)
PKG_VERSION:=		1.0.60
PKG_RELEASE:=		1
PKG_SITES:=		https://downloads.uclibc-ng.org/releases/1.0.60/
PKG_HASH:=		ca20d27fd0d75988a7eb073bf25349bb4cb2b46fe90c412f4207e77207603cb4
endif
DISTFILES:=		$(PKG_NAME)-$(PKG_VERSION).tar.gz
