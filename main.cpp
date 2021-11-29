/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Merrek DeBolt
 */

#include <iostream>
#include "std_lib_facilities.h"

string spelledToNumber(string in)
{
    transform(in.begin(), in.end(), in.begin(), ::tolower);

    if (in == "zero" || in == "0")
        return "0";
    else if (in == "one" || in == "1")
        return "1";
    else if (in == "two" || in == "2")
        return "2";
    else if (in == "three" || in == "3")
        return "3";
    else if (in == "four" || in == "4")
        return "4";
    else if (in == "five" || in == "5")
        return "5";
    else if (in == "six" || in == "6")
        return "6";
    else if (in == "seven" || in == "7")
        return "7";
    else if (in == "eight" || in == "8")
        return "8";
    else if (in == "nine" || in == "9")
        return "9";

    return "0";
}

int main() 
{
    string operation, word, xStr, yStr;
    double x, y, result;

    cout << "Please enter two operands and an operation, all separated by spaces: ";
    
    while (cin >> xStr >> yStr >> operation)
    {
        
        x = stod(spelledToNumber(xStr));
        y = stod(spelledToNumber(yStr));

        int tempX = x / 10, tempY = y / 10;

        if (tempX == 0 && tempY == 0)
        {
            if (operation == "+")
            {
                result = x + y;
                word = "sum";
            }
            else if (operation == "-")
            {
                result = x - y;
                word = "difference";
            }
            else if (operation == "*")
            {
                result = x * y;
                word = "product";
            }
            else if (operation == "/")
            {
                result = x / y;
                word = "quotient";
            }
            
            cout << "The " << word << " of " << x << " and " << y << " is " << result;
        }

        cout << "\nPlease enter two operands and an operation, all separated by spaces: ";
    }

    return 0;
}