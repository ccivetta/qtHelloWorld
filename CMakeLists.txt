cmake_minimum_required(VERSION 3.5)
project(qtHelloWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
find_package(Qt5Widgets REQUIRED)

add_executable(qtHelloWorld ${SOURCE_FILES})

target_link_libraries(qtHelloWorld Qt5::Widgets)