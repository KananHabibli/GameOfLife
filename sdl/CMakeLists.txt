cmake_minimum_required(VERSION 3.17.0)

project(sdl LANGUAGES C)
find_package(SDL2 CONFIG REQUIRED )

add_library(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PUBLIC sdl.c sdl.h)

target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

IF (TARGET SDL2::SDL2main)
target_link_libraries(${PROJECT_NAME} PUBLIC SDL2::SDL2main SDL2::SDL2)
ELSE()
target_link_libraries(${PROJECT_NAME} PUBLIC  SDL2 SDL2main)
ENDIF()
target_compile_definitions(${PROJECT_NAME} PUBLIC USING_LIB=${VALUE})

install(TARGETS ${PROJECT_NAME})
install(FILES sdl.h DESTINATION include)
