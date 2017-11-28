//
// Created by corentin on 28/11/17.
//

#ifndef RECHERCHEOP_KNAPSACK_H
#define RECHERCHEOP_KNAPSACK_H

#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <cmath>

#include "Problem.h"

class Knapsack : public Problem {
private:
    int capaMax;
    int nbObjets;
    std::vector<int> tabProfit;
    std::vector<int> tabPoids;
    double beta;
    double eval_value;
    int size;

public:
    explicit Knapsack(std::string fichier);
    void calculCoeff();
    void eval(Solution s) override;
    void toString();
    int getSize();


};


#endif //RECHERCHEOP_KNAPSACK_H
