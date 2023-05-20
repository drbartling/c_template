cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(HELLO_APP)

# ---- Internal Dependencies ----

if(NOT TARGET HELLO_LIB)
    add_subdirectory(../hello ../hello/HELLO_APP_build)
endif()


# ---- Create binary ----

add_executable(HELLO_APP src/main.c)
target_link_libraries(HELLO_APP HELLO_LIB)

# ---- Run executable ----
# add_custom_target(run
#     COMMAND HELLO_APP "Bob"
#     DEPENDS HELLO_APP
#     WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
# )


include(CTest)
enable_testing()
add_test(
    NAME HELLO_APP_cli_test
    COMMAND HELLO_APP "Bob"
)
