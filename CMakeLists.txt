cmake_minimum_required(VERSION 3.29.3)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(geometry_crash C)

set(EXECUTABLE_NAME "main")

find_package(RAYLIB REQUIRED)
file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS src/*.c)

add_executable(${EXECUTABLE_NAME})
target_sources(${EXECUTABLE_NAME} PRIVATE ${PROJECT_SOURCES})
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(${EXECUTABLE_NAME} raylib)

if (APPLE)
    target_link_libraries(${EXECUTABLE_NAME} "-framework IOKit")
    target_link_libraries(${EXECUTABLE_NAME} "-framework Cocoa")
    target_link_libraries(${EXECUTABLE_NAME} "-framework OpenGL")
endif()
