
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dynie Mesoneuvre
 */


#include <iostream>

using namespace std;

int main()
{
    string operation;
    int num1;
    int num2;



    cout << "Input operator and two operands:";

    cin >> operation;
    cin >> num1;
    cin >> num2;


    if(operation=="+")
    {
        double add = num1 + num2;
        cout << "Your answer is: " << add;
    }


      if(operation=="-")
    {
        double subtract = num1 - num2;
        cout << "Your answer is: " << subtract;
    }

      if(operation=="*")
    {
        double multiply = num1 * num2;
        cout << "Your answer is: " << multiply;
    }

      if(operation=="/")
    {
        double divide = num1 / num2;
        cout << "Your answer is: " << divide ;
    }


    return 0;
}
