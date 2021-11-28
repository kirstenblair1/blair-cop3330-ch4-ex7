/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution ch 4 ex 7
 *  Copyright 2021 kirsten blair
 */

#include "std_lib_facilities.h"

 vector <string> names{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
 vector <string> digits {"0","1", "2", "3", "4", "5", "6", "7", "8", "9"};


int get_numbers(string string)
{
    int result = -1;

    for(int i = 0; i < names.size(); i++)
    {
        if (names[i] == string)
        {
            result = stoi(digits[i]);
            break;
        }

    }

    for(int i = 0; i < digits.size(); i++)
    {
        if(digits[i] == string)
        {
            result = stoi(digits[i]);
            break;
        }
    }

    return result; 

}

int main()
{
    cout << "Enter 2 numbers and the operation desired: ";

    string val1, val2;
    char operation;

    while(cin >> val1 >> val2 >> operation)
    {
        int val1Modify = get_numbers(val1);
        int val2Modify = get_numbers(val2);

        if (val1Modify == -1 || val2Modify == -1|| val1Modify > 9 || val2Modify > 9)
        {
            cout << "Invalid.\n" << "Please enter another set of numbers: \n";
        }

        else if (operation == '+')
        {
            cout << "The sum of " << val1Modify << " and " << val2Modify << " is " << val1Modify + val2Modify << "\n";

        }
        else if (operation == '-')
        {

            cout << "The difference between " << val1Modify << " and " << val2Modify << " is " << val1Modify - val2Modify << "\n";
        
        }

        else if (operation == '*')
        {

            cout << "The product of " << val1Modify << " and " << val2Modify << " is " << val1Modify * val2Modify << "\n";

        }

        else if (operation == '/' )
        {
            
            cout << "The dividend of " << val1Modify << " and " << val2Modify << " is " << val1Modify / val2Modify << "\n";

        }

        else
        {
            cerr << "Please enter another set of numbers: \n";
        }


    }

    return 0;

}
