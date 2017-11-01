cmake_minimum_required(VERSION 2.8)
project(tconf LANGUAGES C)

include(GNUInstallDirs)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

include_directories(${PROJECT_NAME} PUBLIC
    # Put include directories here
    # ${CMAKE_SOURCE_DIR}/include
)

add_library(${PROJECT_NAME}
    # Put the names of source files here
    src/tconf.c
)

target_link_libraries(${PROJECT_NAME}
    # Put library dependencies here
)

add_subdirectory(tests)

enable_testing()

# Add tests here
add_exe_test(new_file_parser_reference_is_valid)
