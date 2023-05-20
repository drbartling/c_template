cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(HELLO_PROJECT)

# ---- Dependencies ----

include(cmake/CPM.cmake)

CPMAddPackage("gh:catchorg/Catch2@3.3.2")

# ---- Project libraries ----

add_subdirectory(lib/hello)

# ---- Project binaries ----

add_subdirectory(lib/application)

# ---- Enable testing ----

include(CTest)
