cmake_minimum_required(VERSION 3.8)
project(RechercheOP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Problem.cpp Problem.h Knapsack.cpp Knapsack.h Solution.cpp Solution.h LocalSearch.cpp LocalSearch.h RandomSearch.cpp RandomSearch.h RandomWalk.cpp RandomWalk.h HillclimberBest.cpp HillclimberBest.h HillclimberFirst.cpp HillclimberFirst.h RecuitSimule.cpp RecuitSimule.h)
add_executable(RechercheOP ${SOURCE_FILES})