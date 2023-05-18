cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(C_TEMPLATE_PROJECT)

# ---- Dependencies ----

include(cmake/CPM.cmake)

CPMAddPackage("gh:catchorg/Catch2@3.3.2")

# ---- Create binary ----

add_executable(C_TEMPLATE_PROJECT src/main.c src/hello.c)

# ---- Create test binary ----
add_executable(C_TEMPLATE_PROJECT_test src/hello.c test/hello.test.cpp)
target_link_libraries(C_TEMPLATE_PROJECT_test Catch2::Catch2WithMain)
target_compile_features(C_TEMPLATE_PROJECT_test PRIVATE cxx_std_17)
target_include_directories(C_TEMPLATE_PROJECT_test PRIVATE src)

# ---- Enable testing ----

enable_testing()
add_test(C_TEMPLATE_PROJECT_test C_TEMPLATE_PROJECT_test)
