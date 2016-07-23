set(plasma_engine_networkd_SRCS
    networkd_engine.cc
)
set(plasma_engine_wpa_supplicant_SRCS
    wpa_supplicant_engine.cc
)

add_library(plasma_engine_networkd MODULE ${plasma_engine_networkd_SRCS})
target_link_libraries(plasma_engine_networkd
    -Wl,--gc-sections
    Qt5::DBus
    Qt5::Gui
    KF5::DBusAddons
    KF5::Plasma
    KF5::Service
)
add_library(plasma_engine_wpa_supplicant MODULE ${plasma_engine_wpa_supplicant_SRCS})
target_link_libraries(plasma_engine_wpa_supplicant
    -Wl,--gc-sections
    Qt5::Gui
    KF5::Plasma
    KF5::Service
    wpa_ctrl
)

kcoreaddons_desktop_to_json(plasma_engine_networkd plasma-dataengine-networkd.desktop)
kcoreaddons_desktop_to_json(plasma_engine_wpa_supplicant plasma-dataengine-wpa_supplicant.desktop)

install(TARGETS plasma_engine_networkd plasma_engine_wpa_supplicant DESTINATION ${PLUGIN_INSTALL_DIR}/plasma/dataengine)
install(FILES plasma-dataengine-networkd.desktop plasma-dataengine-wpa_supplicant.desktop DESTINATION ${SERVICES_INSTALL_DIR} )
