//
// Created by corentin on 28/11/17.
//

#include "RandomSearch.h"

RandomSearch::RandomSearch(Problem p) {
    probleme = p;
    nbEval = 1000;
    fitnessMax = 30000;
    s.makeRandom();
}

void RandomSearch::run(Solution s) {
    probleme.eval(s);
    double fitness_best = probleme.getEvalValue();
    double fitness_tmp = 0;


    for (int i =0; i<nbEval; i++){
        s.makeRandom();
        probleme.eval(s);
        fitness_tmp = probleme.getEvalValue();

        if(fitness_tmp > fitness_best)
        {
            fitness_best = fitness_tmp;
        }

    }
    if(fitness_best > bestFitness)
        bestFitness = fitness_best;
}

double RandomSearch::getBestFitness() {
    return bestFitness;
}


