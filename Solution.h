//
// Created by corentin on 28/11/17.
//

#ifndef RECHERCHEOP_SOLUTION_H
#define RECHERCHEOP_SOLUTION_H


#include <vector>
#include <time.h>
#include <math.h>
#include <stdlib.h>

class Solution {
private:
    std::vector<int> vecteur;
public:
    Solution();
    Solution(int size);
    explicit Solution(std::vector<int> vecteur);
    void makeRandom();
    void flip(int indice);
    std::vector<int> get_solution();
    int get_i(int indice);
    void set_solution(int value, int indice);
};


#endif //RECHERCHEOP_SOLUTION_H
