//
// Created by corentin on 28/11/17.
//

#ifndef RECHERCHEOP_PROBLEM_H
#define RECHERCHEOP_PROBLEM_H

#include <stdio.h>
#include <stdlib.h>
#include "Solution.h"


class Problem {
private:
    double eval_value;
    int size;
public:
    virtual void eval(Solution s);
    double getEvalValue();

};


#endif //RECHERCHEOP_PROBLEM_H
