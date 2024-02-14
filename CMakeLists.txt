cmake_minimum_required(VERSION 3.26)
project(SLR1Parser)

set(CMAKE_CXX_STANDARD 20)

add_executable(SLR1Parser
        src/main.cpp
        src/grammar.cpp
        src/lexer.cpp
        src/symbol_table.cpp)
