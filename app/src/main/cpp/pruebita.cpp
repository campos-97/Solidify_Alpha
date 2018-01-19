//
// Created by rober on 15/1/2018.
//

#include "pruebita.h"
double pruebita::function(double x) {
    return x*x;
}
double pruebita::numericalDerivative(double x){
    double epsilon = 10e-7;
    double result = (function(x+epsilon) - function(x))/epsilon;
    return result;
}