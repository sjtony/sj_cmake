cmake_minimum_required(VERSION 3.13)
project(myproject VERSION 1.0.0)
add_library(sjLib foo.c)
set_target_properties(sjLib PROPERTIES PUBLIC_HEADER foo.h)
install(TARGETS sjLib LIBRARY DESTINATION lib
PUBLIC_HEADER DESTINATION include/)
#add_executable(sjTest main.c)
#install(TARGETS sjTest DESTINATION bin)