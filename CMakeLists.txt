cmake_minimum_required(VERSION 3.17.0)
project(game_of_life LANGUAGES C)
add_subdirectory (ansi)
add_subdirectory (clipped)
add_subdirectory (circular)
add_subdirectory (sdl)

set(SRC main.c)
add_executable(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PUBLIC ${SRC})

target_link_libraries(${PROJECT_NAME} PUBLIC ansi)
target_link_libraries(${PROJECT_NAME} PUBLIC clipped)
target_link_libraries(${PROJECT_NAME} PUBLIC circular)
target_link_libraries(${PROJECT_NAME} PUBLIC sdl)

install(TARGETS ${PROJECT_NAME})
