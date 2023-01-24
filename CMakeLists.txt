cmake_minimum_required(VERSION 3.21)
project(Project)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)
file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

add_executable(Project ${SOURCE_FILES})
