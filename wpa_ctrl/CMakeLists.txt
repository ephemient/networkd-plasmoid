set(wpa_ctrl_SRCS
    hostap/src/common/wpa_ctrl.c
    hostap/src/utils/os_unix.c
)
set(wpa_ctrl_DEFINES
    -DCONFIG_CTRL_IFACE
    -DCONFIG_CTRL_IFACE_UNIX
    -DCONFIG_CTRL_IFACE_CLIENT_DIR="/var/run/wpa_supplicant"
    -DCONFIG_CTRL_IFACE_CLIENT_PREFIX=""
)

set(CMAKE_AUTOMOC OFF)
add_library(wpa_ctrl STATIC ${wpa_ctrl_SRCS})
add_definitions(${wpa_ctrl_DEFINES})
target_include_directories(wpa_ctrl PUBLIC
    hostap/src/common
    hostap/src/utils
    hostap/src
)
target_compile_options(wpa_ctrl PUBLIC
    -fdata-sections
    -ffunction-sections
)
set_property(TARGET wpa_ctrl PROPERTY C_STANDARD 99)
set_property(TARGET wpa_ctrl PROPERTY LINKER_LANGUAGE C)
