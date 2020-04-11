#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    string enteredNumber;
    int enteredNumerToInt;
    int firstNumber;
    int lastNumber;
    int addedNumber;
    cout << "Enter the number";
    cin >> enteredNumber;
    cout << "Entered Number Check =" << enteredNumber << endl;

    string firstDigit = enteredNumber.substr(0, 1);

    char firstDigitChar[1];

    strcpy(firstDigitChar, firstDigit.c_str());
    cout << firstDigitChar[0] << endl;
    if (firstDigitChar[0] != '0')
    {
        enteredNumerToInt = stoi(enteredNumber);
        firstNumber = enteredNumerToInt;

        while (firstNumber >= 10)
        {
            firstNumber = firstNumber / 10;
        }

        cout << "first Number case 1: " << lastNumber << endl;

        lastNumber = enteredNumerToInt % 10;
        cout << "last Number case 1: " << lastNumber << endl;

        addedNumber = firstNumber + lastNumber;
        cout << " Addition of First and Last Digit=" << addedNumber << endl;
    }
    else
    {
        firstNumber = 0;
        cout << "last Number case 2: " << lastNumber << endl;
        cout << "last Number case 2: " << lastNumber << endl;

        enteredNumerToInt = stoi(enteredNumber);
        lastNumber = enteredNumerToInt % 10;
        addedNumber = firstNumber + lastNumber;
        cout << " Addition of First and Last Digit=" << addedNumber << endl;
    }

    return 0;
}
