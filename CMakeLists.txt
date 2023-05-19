cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(HELLO_PROJECT)

# ---- Dependencies ----

include(cmake/CPM.cmake)

CPMAddPackage("gh:catchorg/Catch2@3.3.2")

# ---- Create binary ----

add_executable(HELLO_PROJECT src/main.c src/hello.c)

# ---- Create test binary ----
add_executable(tests src/hello.c test/hello.test.cpp)
target_link_libraries(tests Catch2::Catch2WithMain)
target_compile_features(tests PRIVATE cxx_std_17)
target_include_directories(tests PRIVATE src)

# ---- Enable testing ----

list(APPEND CMAKE_MODULE_PATH ${Catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)
catch_discover_tests(tests)
