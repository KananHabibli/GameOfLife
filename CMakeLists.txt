cmake_minimum_required(VERSION 3.17.2)
project(game_of_life LANGUAGES C)
add_subdirectory (ansi)
add_subdirectory (clipped)
add_subdirectory (circular)

set(SRC main.c)
add_executable(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PUBLIC ${SRC})

target_link_libraries(${PROJECT_NAME} PUBLIC ansi)
target_link_libraries(${PROJECT_NAME} PUBLIC clipped)
target_link_libraries(${PROJECT_NAME} PUBLIC circular)

install(TARGETS ${PROJECT_NAME})