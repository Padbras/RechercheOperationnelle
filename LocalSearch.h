//
// Created by corentin on 28/11/17.
//

#ifndef RECHERCHEOP_LOCALSEARCH_H
#define RECHERCHEOP_LOCALSEARCH_H


#include "Problem.h"

class LocalSearch {

protected:
    Problem probleme;
    int nbEval;
    double bestFitness;
    Solution s;
    double fitnessMax;
public:
    LocalSearch();
    explicit  LocalSearch(Problem p);
    virtual void run(Solution s);

};


#endif //RECHERCHEOP_LOCALSEARCH_H
