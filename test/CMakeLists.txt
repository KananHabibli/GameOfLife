cmake_minimum_required(VERSION 3.17.0)
project(test_cases LANGUAGES C)



set(MYLIB functions)
set(SRC ../clipped/clipped.c ../circular/circular.c)
set(HEADERS ../clipped/clipped.h ../circular/circular.h)
add_library(${MYLIB})

target_sources(${MYLIB} PRIVATE ${SRC} ${HEADERS})
target_link_libraries(${MYLIB} INTERFACE m)
target_link_libraries(${MYLIB} PUBLIC gcov)
target_compile_options(${MYLIB} PUBLIC "--coverage")
target_link_options(${MYLIB} PUBLIC "--coverage")

set(TEST_PROJECT test_files)
add_executable(${TEST_PROJECT})
target_sources(${TEST_PROJECT} PUBLIC test.c)
target_link_libraries(${TEST_PROJECT} PUBLIC ${MYLIB} cunit)

install(TARGETS ${TEST_PROJECT})


