//
// Created by rober on 15/1/2018.
//

#include "pruebita.h"
#include "exprtk.cpp"

template <typename T>
void pruebita::mierda()
{
    typedef exprtk::symbol_table<T> symbol_table_t;
    typedef exprtk::expression<T>     expression_t;
    typedef exprtk::parser<T>             parser_t;

    std::string expression_string = "clamp(-1.0,sin(2 * pi * x) + cos(x / 2 * pi),+1.0)";

    T x;

    symbol_table_t symbol_table;
    symbol_table.add_variable("x",x);
    symbol_table.add_constants();

    expression_t expression;
    expression.register_symbol_table(symbol_table);

    parser_t parser;
    parser.compile(expression_string,expression);

    for (x = T(-5); x <= T(+5); x += T(0.001))
    {
        T y = expression.value();
        printf("%19.15f\t%19.15f\n",x,y);

    }

}
double pruebita::function(double x) {
    return x*x;
}
double pruebita::numericalDerivative(double x){
    double epsilon = 10e-7;
    double result = (function(x+epsilon) - function(x))/epsilon;
    mierda<double>();
    return result;
}