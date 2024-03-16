# project(duomee)

# STATIC：静态库 SHARED：动态库
add_executable(duomee
    event/eventmanager.h
    event/eventmanager.cpp
)

target_link_libraries(duomee PRIVATE Qt6::Core)

target_include_directories(duomee INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
