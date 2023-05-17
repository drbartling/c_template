set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_VERSION 1)
cmake_minimum_required(VERSION 3.22)

project(common_lib C CXX ASM)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR/contrib})
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR/extras})

add_executable(tests src/hello.c test/hello.test.cpp test/main.test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2)
target_include_directories(tests PRIVATE src)
include(CTest)
include(Catch)
catch_discover_tests(tests)
target_link_libraries(tests PUBLIC "-static")

add_executable(hello src/main.c src/hello.c)
