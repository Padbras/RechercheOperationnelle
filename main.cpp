#include <iostream>
#include "Solution.h"
#include "Knapsack.h"
#include "RandomSearch.h"

int main() {
    Knapsack sac("/home/corentin/CLionProjects/RechercheOP/ks_1000.dat");
    Solution s(sac.getSize());
    s.makeRandom();
    sac.toString();
    RandomSearch recherche(sac);
    recherche.run(s);
    std::cout << recherche.getBestFitness() << std::endl;

    return 0;
}

/*
int main(int argc, char ** argv)
{

  if(argc < 4)
    std::cout << "Pas assez d'arguments, utilisez " << argv[0] << " NOMDUFICHIER" << std::endl;
  else
    {
      srand(atoi(argv[3]));
      Sacados sac;
      double valeurResultat = 0;
      double valeurMarcheAlea = 0;
      double valeurHillBest = 0;
      double valeurHillFirst = 0;
      double valeurRecuitSimule = 0;

      int nbRun = atoi(argv[2]);
      sac.lireFichier(argv[1]);

      //valeurHillBest = sac.hillClimberBest(nbRun);
      //valeurHillFirst = sac.hillClimberFirst(nbRun);
      valeurRecuitSimule = sac.recuitSimule(42, 100, 0.95, 100);


      //std::cout << nbRun <<" " << valeurHillBest<<" "<<30000 << std::endl;
      //std::cout << nbRun <<" "<<valeurHillFirst<<" "<<30000<<std::endl;

      return 0;
    }
}
 */