cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(HELLO_LIB)

# ---- Dependencies ----

include(../../cmake/CPM.cmake)

CPMAddPackage("gh:catchorg/Catch2@3.3.2")

# ---- Create library ----

add_library(HELLO_LIB src/hello.c)
target_include_directories(HELLO_LIB PUBLIC src)

# ---- Create test binary ----
add_executable(HELLO_LIB_tests test/hello.test.cpp)
target_link_libraries(HELLO_LIB_tests Catch2::Catch2WithMain HELLO_LIB)
target_compile_features(HELLO_LIB_tests PRIVATE cxx_std_17)
target_include_directories(HELLO_LIB_tests PRIVATE src)

# ---- Enable testing ----

list(APPEND CMAKE_MODULE_PATH ${Catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)
catch_discover_tests(HELLO_LIB_tests)
