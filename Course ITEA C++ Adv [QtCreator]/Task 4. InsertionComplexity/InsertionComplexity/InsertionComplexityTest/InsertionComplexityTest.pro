include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

INCLUDEPATH += ../InsertionComplexity

HEADERS += \
    ../InsertionComplexity/vector.h\
    ../InsertionComplexity/list.h\
    ../InsertionComplexity/stack.h\
    ../InsertionComplexity/queue.h\
    listTests.h \
    vectorTests.h \
    stackTests.h \
    queueTests.h

SOURCES += \
        ../InsertionComplexity/vector.cpp\
        ../InsertionComplexity/list.cpp\
        ../InsertionComplexity/stack.cpp\
        ../InsertionComplexity/queue.cpp\
        main.cpp
