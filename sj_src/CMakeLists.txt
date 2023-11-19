cmake_minimum_required(VERSION 3.13)
project(myproject2 VERSION 1.0.0)
add_executable(sjTest main.c)
target_link_directories(sjTest PRIVATE ${CMAKE_SOURCE_DIR}/../sj_lib/build/)
target_link_libraries(sjTest sjLib)
#install(TARGETS sjTest DESTINATION bin)l
