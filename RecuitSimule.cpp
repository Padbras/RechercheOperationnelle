//
// Created by corentin on 28/11/17.
//

#include "RecuitSimule.h"

/*
double Sacados::recuitSimule(double T, int iterationAvModif, double facteurReduction, int nbEvalMax)
{
    std::vector<int> x = rand_x();
    double Sx = evaluation(x);
    double Sprime;
    double delta;
    int cptReduction = 0;
    int u;
    int indice;
    bool stop = false;
    int nbEval = 0;

    while(nbEval < nbEvalMax)
    {
        indice = voisinAlea2(x);
        Sprime = evaluation(x);
        delta = Sprime - Sx;
        if(!delta <= 0)
        {
            u = rand()%2;
            if(u >= exp(delta/T)){
                voisin(x,indice);
            }
        }

        // Critere de reduction de la temperature
        cptReduction++;
        if(cptReduction == iterationAvModif)
        {
            cptReduction = 0;
            T = T*facteurReduction;
        }
        // Critere d'arret
        nbEval++;
    }
}
 */