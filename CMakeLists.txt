cmake_minimum_required(VERSION 3.5)

project(ChitterChat VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets LinguistTools Core)

qt_standard_project_setup()

add_subdirectory(src/duomee)
add_subdirectory(src/app)
