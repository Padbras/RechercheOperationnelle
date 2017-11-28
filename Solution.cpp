//
// Created by corentin on 28/11/17.
//

#include "Solution.h"

Solution::Solution() = default;

Solution::Solution(std::vector<int> vec) {
    vecteur = vec;
}

void Solution::makeRandom() {
    srand(time(NULL));
    for (int &i : vecteur)
        i = rand()%2;
}

std::vector<int> Solution::get_solution() {
    return vecteur;
}

void Solution::set_solution(int value, int indice) {
    vecteur[indice] = value;


}

void Solution::flip(int indice) {
    if(vecteur[indice] == 0)
        vecteur[indice] = 1;
    else vecteur[indice] = 0;
}

Solution::Solution(int size) {
    vecteur.resize(size);
}

int Solution::get_i(int indice) {
    return vecteur[indice];
}
