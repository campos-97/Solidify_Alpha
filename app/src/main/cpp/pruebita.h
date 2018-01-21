//
// Created by rober on 15/1/2018.
//

#ifndef SOLIDIFY_ALPHA_PRUEBITA_H
#define SOLIDIFY_ALPHA_PRUEBITA_H

#include <string>

class pruebita {
public:
    template <typename T> static double equationEval(std::string expression_string, std::string variable, double varValue);
    static double numericalDerivative(double x);

};


#endif //SOLIDIFY_ALPHA_PRUEBITA_H
