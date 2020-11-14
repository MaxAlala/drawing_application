QT += core
QT += gui
QT +=network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

TARGET = facePicturing
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

INCLUDEPATH += -I/usr/local/include/opencv2
LIBS += -L/usr/local/lib -lopencv_core -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_videoio

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++0x

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        myserver.cpp \
        mythread.cpp \
        opencv.cpp \
        serverproxy.cpp

HEADERS += \
        enums_constants.h \
        mainwindow.h \
        myserver.h \
        mythread.h \
        opencv.h \
        serverproxy.h\
        spline.h

FORMS += \
        mainwindow.ui

win32:RC_ICONS += icon.ico
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
