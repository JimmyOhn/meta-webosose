# Copyright (c) 2019-2020 LG Electronics, Inc.

EXTENDPRAUTO_append = "webos1"

VIRTUAL-RUNTIME_bash ?= "bash"
RDEPENDS_bats_append_class-target = " ${VIRTUAL-RUNTIME_bash}"
RDEPENDS_bats_remove_class-target = "${@oe.utils.conditional('WEBOS_PREFERRED_PROVIDER_FOR_BASH', 'busybox', 'bash', '', d)}"