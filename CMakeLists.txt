cmake_minimum_required(VERSION 3.15)
project(rule_engine CXX)




add_library(rule_engine src/rule_engine.cpp)
target_include_directories(rule_engine PUBLIC include)



set_target_properties(rule_engine PROPERTIES PUBLIC_HEADER "include/rule_engine.h")
install(TARGETS rule_engine)
