cmake_minimum_required(VERSION 3.17.0)

project(ansi LANGUAGES C)

add_library(${PROJECT_NAME} "")

target_sources(${PROJECT_NAME} PUBLIC ansi.c ansi.h)

target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} INTERFACE m)

target_compile_definitions(${PROJECT_NAME} PUBLIC USING_LIB=${VALUE})

install(TARGETS ${PROJECT_NAME})
install(FILES ansi.h DESTINATION include)
