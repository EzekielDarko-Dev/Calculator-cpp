#include <iostream>
#include "calc.hpp"
using namespace std;

int main()
{
 float a = 0;
 float b = 0;
 char op;
 char choice;
   do {

 cout << "Enter first number: ";
 cin >> a;
 cout << "Enter second number: ";
 cin >> b;
 cout << "Select operator (+,-,*,/)" << endl;
 cin >> op;
 
 if (op=='+')
    {
        cout << a << " + " << b << " = " << add(a, b) << "\n";
    }
    
    else if (op=='-')
    {
        cout << a << " - " << b << " = " << sub(a,b) << "\n";
    }
    
    else if (op=='*')
    {
        cout << a << " * " << b << " = " << mult(a,b) << "\n";
    }
    
    else if (op=='/')
    {
        cout << a << " / " << b << " = " << divide(a,b) << "\n";
    }
    
    else 
    {
        cout << "Invalid operator \n";
    }
    
    cout << "Do you want to continue? (y/n)";
    cin >> choice;
    }
    while(choice=='y' || choice=='Y');
    
    return 0;
    
}