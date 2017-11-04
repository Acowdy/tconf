cmake_minimum_required(VERSION 2.8)
project(tconf LANGUAGES C)

option(BUILD_SHARED_LIBS "Build all libraries as shared libraries" ON)
option(BUILD_TESTS "Build the unit and integration tests for this project" ON)
# option(BUILD_DOCS "Build and install HTML based documentation and man pages (requires Doxygen)")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_library(${PROJECT_NAME}
    # Put the names of source files here
    src/tconf.c
)

if(BUILD_TESTS)
    add_subdirectory(tests)
    enable_testing()

    # Add tests here
    add_exe_test(new_file_parser_reference_is_valid)
    add_exe_test(new_string_parser_reference_is_valid)
    add_exe_test(parsing_empty_file_returns_status_end)
    add_exe_test(new_setting_reference_is_valid)
endif()
