cmake_minimum_required(VERSION 3.13)
project(myproject VERSION 1.0.0)
add_executable(sjTest main.c)
install(TARGETS sjTest DESTINATION bin)