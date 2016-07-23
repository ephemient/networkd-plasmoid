project(networkd-plasmoid)
cmake_minimum_required(VERSION 2.8.12)

find_package(ECM 1.0.0 REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings NO_POLICY_SCOPE)

set(QT_MIN_VERSION 5.3.0)
set(KF5_MIN_VERSION 5.8.0)

find_package(Qt5 ${QT_MIN_VERSION} REQUIRED COMPONENTS
    DBus
    Gui
)
find_package(KF5 ${KF5_MIN_VERSION} REQUIRED COMPONENTS
    DBusAddons
    Plasma
    Service
)

add_subdirectory(dataengine)
add_subdirectory(wpa_ctrl)
