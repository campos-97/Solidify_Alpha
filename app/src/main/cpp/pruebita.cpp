//
// Created by rober on 15/1/2018.
//

#include "pruebita.h"
#include "exprtk.cpp"

template <typename T>
double pruebita::equationEval(std::string expression_string, std::string variable, double varValue) //Array of variables could be implemented
{
    typedef exprtk::symbol_table<T> symbol_table_t;
    typedef exprtk::expression<T>     expression_t;
    typedef exprtk::parser<T>             parser_t;


    T x;

    symbol_table_t symbol_table;
    symbol_table.add_variable(variable,x);
    symbol_table.add_constants();

    expression_t expression;
    expression.register_symbol_table(symbol_table);

    parser_t parser;
    parser.compile(expression_string,expression);

    x = T(varValue);

    return expression.value();

}

double pruebita::numericalDerivative(double x){
    double epsilon = 10e-7;
    std::string function = "x*x";
    std::string var = "x";
    double result = (equationEval<double>(function, var, x+epsilon) - equationEval<double>(function, var, x))/epsilon;
    return result;
}