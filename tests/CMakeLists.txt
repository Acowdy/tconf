# Tests will be built here

function(add_exe_test testname)
    add_executable(${testname} tests/${testname}.c)
    add_test(${testname} COMMAND tests/${testname})
    target_link_libraries(${testname} ${PROJECT_NAME})
    target_include_directories(${testname} PUBLIC
                                    ${CMAKE_SOURCE_DIR}/src
                                    ${CMAKE_BINARY_DIR}/tests)
    set_target_properties(${testname} PROPERTIES
                          RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests")
endfunction(add_exe_test)

set(TEST_DATA_PATH ${CMAKE_SOURCE_DIR}/tests/data/)
configure_file(configure.in.h configure.h)
