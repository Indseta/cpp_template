cmake_minimum_required(VERSION 3.28)
project(cpp_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/src/**/*.cpp" "${CMAKE_SOURCE_DIR}/src/*.cpp")
include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(${PROJECT_NAME} ${SOURCES})
