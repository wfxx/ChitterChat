# project(app)

add_executable(app
    main.cpp
    ui/mainwindow.h ui/mainwindow.cpp ui/mainwindow.ui
    ui/logindialog.h ui/logindialog.cpp ui/logindialog.ui
)

target_link_libraries(app PRIVATE Qt6::Widgets)

set_target_properties(app PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)
