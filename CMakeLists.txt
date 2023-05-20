cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(HELLO_PROJECT)

# ---- Dependencies ----

include(cmake/CPM.cmake)

CPMAddPackage("gh:catchorg/Catch2@3.3.2")

# ---- Components ----

add_subdirectory(lib/hello)

# ---- Enable testing ----

include(CTest)
