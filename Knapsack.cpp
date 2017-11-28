//
// Created by corentin on 28/11/17.
//

#include "Knapsack.h"



void Knapsack::calculCoeff()
{
    float coefficient = 0;
    float coeff_tempo = 0;

    for(int i = 0; i < tabPoids.size(); i++)
    {

        coeff_tempo = tabProfit[i] / tabPoids[i];
        if(coeff_tempo > coefficient)
        {
            coefficient = coeff_tempo;
        }
    }
    beta = coefficient;
}


Knapsack::Knapsack(std::string fichier)
{
    int tmp = 0;
    std::fstream ifs(fichier.c_str(), std::ios::in);
    if(ifs)
    {
        ifs >> nbObjets; // RECUP NB OBJET POUR CREER TABLEAUX

        for (int i = 0; i<nbObjets; i++) // RECUP DES PROFITS
        {
            ifs >> tmp;
            tabProfit.push_back(tmp);
        }
        for (int j = 0; j<nbObjets; j++) // RECUP DES POIDS
        {
            ifs >> tmp;
            tabPoids.push_back(tmp);
        }

        ifs >> capaMax; // RECUP CAPA MAX
        size = nbObjets;
        calculCoeff();

    }
    else std::cout << "Erreur de lecture du fichier" << std::endl;
}

void Knapsack::eval(Solution s){

    double z = 0;
    double w = 0;

    for(int i = 0; i < tabProfit.size(); i++)
    {
        z += s.get_i(i)*tabProfit[i];
        w += s.get_i(i)*tabPoids[i];
    }

    if(w <= capaMax)
        eval_value = z;
    else eval_value = z - beta * (w - capaMax);


}

void Knapsack::toString() {


    std::cout << "Nombre d'objets: " << nbObjets << std::endl;
    std::cout << "Valeurs des objets: " << std::endl;

    for (int k = 0; k<nbObjets; k++) // RECUP DES PROFITS
    {
        std::cout << "Objet numéro" << k << " Profit: " << tabProfit[k] << " Poids: " << tabPoids[k] << std::endl;
    }

    std::cout << "Capacité maximale du sac: " << capaMax << std::endl;

}

int Knapsack::getSize() {
    return size;
}


