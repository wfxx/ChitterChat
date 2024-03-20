# project(duomee)

# STATIC：静态库 SHARED：动态库
add_executable(duomee
    base/filemanager.h base/filemanager.cpp
    base/eventmanager.h base/eventmanager.cpp
    base/logmanager.h base/logmanager.cpp
    ui/commonToast.h ui/commonToast.cpp ui/commonToast.ui
    ui/commondialog.h ui/commondialog.cpp ui/commondialog.ui
    ui/commonhead.h ui/commonhead.cpp ui/commonhead.ui
)

target_link_libraries(duomee PRIVATE Qt6::Core)

target_include_directories(duomee INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
