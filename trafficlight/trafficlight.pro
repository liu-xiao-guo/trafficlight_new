TEMPLATE = app
TARGET = trafficlight

load(ubuntu-click)

QT += core qml quick

SOURCES += main.cpp trafficlight.cpp
HEADERS += trafficlight.h

RESOURCES += trafficlight.qrc

OTHER_FILES += trafficlight.apparmor \
               trafficlight.desktop \
               trafficlight.png

#specify where the config files are installed to
config_files.path = /trafficlight
config_files.files += $${OTHER_FILES}
message($$config_files.files)
INSTALLS+=config_files

# Default rules for deployment.
target.path = $${UBUNTU_CLICK_BINARY_PATH}
INSTALLS+=target

