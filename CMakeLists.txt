cmake_minimum_required(VERSION 3.16)
project(spasm)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 20)

add_executable(spasm src/main.cpp
        src/assembler/Visitor.cpp
        src/utils/utils.cpp
        src/assembler/AssemblyVisitor.cpp
        src/assembler/AssemblyLexer.cpp
        src/assembler/AssemblyParser.cpp
        src/assembler/AssemblyBaseVisitor.cpp)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)

# Specify the version of the antlr4 library needed for this project.
# By default the latest version of antlr4 will be used.  You can specify a
# specific, stable version by setting a repository tag value or a link
# to a zip file containing the libary source.
set(ANTLR4_TAG 4.12.0)
set(ANTLR4_ZIP_REPOSITORY https://github.com/antlr/antlr4/archive/refs/tags/4.12.0.zip)

# add external build for antlr-cpp
include(ExternalAntlr4Cpp)
# add antlr4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIR})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${PROJECT_SOURCE_DIR}/antlr/antlr-4.12.0-complete.jar)
find_package(ANTLR REQUIRED)
#add_dependencies(spasm antlr4_shared)
target_link_libraries(spasm antlr4_static)
#target_link_libraries(spasm PRIVATE antlr4_shared)

include_directories(../sputils/src)
target_include_directories(spasm PRIVATE ../sputils/src)

target_link_libraries(spasm "D:/Programming (Ankit)/Projects/spade/1.0/sputils/build-debug/libsputils.a")
