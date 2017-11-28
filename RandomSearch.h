//
// Created by corentin on 28/11/17.
//

#ifndef RECHERCHEOP_RANDOMSEARCH_H
#define RECHERCHEOP_RANDOMSEARCH_H


#include "LocalSearch.h"

class RandomSearch : public LocalSearch {

private:

public:
    explicit RandomSearch(Problem p);
    void run(Solution s) override ;
    double getBestFitness();


};


#endif //RECHERCHEOP_RANDOMSEARCH_H
