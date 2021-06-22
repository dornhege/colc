cmake_minimum_required(VERSION 3.10)
project(colc)

set(CMAKE_BUILD_TYPE RelWithDebInfo)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options("-Wall")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

include_directories(src)

add_executable(colc
colc.cpp
)
target_link_libraries(colc Qt5::Widgets)

