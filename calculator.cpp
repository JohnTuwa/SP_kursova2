#include "calculator.h"
// adding func
int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}
// substraction func
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}
// multiplication func
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
// TODO add subdivision
// TODO add output for result