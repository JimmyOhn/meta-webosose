# Copyright (c) 2024 LG Electronics, Inc.

EXTENDPRAUTO:append = "webos1"

DEPENDS:append = " \
    ${@bb.utils.contains('DISTRO_FEATURES','webos-neural-network','tensorflow-lite flatbuffers','',d)} \
"
