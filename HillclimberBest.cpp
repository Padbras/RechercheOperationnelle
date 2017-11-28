//
// Created by corentin on 28/11/17.
//

#include "HillclimberBest.h"


/*
double Sacados::hillClimberBest(int nbEvalMax)
{

   std::vector<int> x = rand_x();
   double sBest = evaluation(x);
   double sprime = 0;
   int indiceTrouve = 0;
   double fbestN;
   bool stop = false;
   int nbEval = 1;

   while (!stop && nbEval < nbEvalMax) {

       fbestN = -1;

       for(int j = 0; j<x.size(); j++)
     {
       voisin(x, j);
       sprime = evaluation(x);
       nbEval++;
       if (sprime > fbestN)
         {
           fbestN = sprime;
           indiceTrouve = j;
         }
        voisin(x, j);

     }

       if (sBest < fbestN) {
     voisin(x, indiceTrouve);
     sBest = fbestN;
       } else {
     stop = true;
       }
     }

     return sBest;
 }*/
