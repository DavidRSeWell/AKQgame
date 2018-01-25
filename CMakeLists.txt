cmake_minimum_required(VERSION 3.9)
project(MCTS)

set(CMAKE_CXX_STANDARD 17)

add_executable(MCTS main.cpp Tree.cpp Tree.hpp Node.cpp Node.hpp)