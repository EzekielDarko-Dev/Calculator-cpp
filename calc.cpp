#include <iostream>
#include "calc.hpp"
using namespace std;

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mult(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        cout << "Division by zero not allowed";
    }
    return a / b;
}