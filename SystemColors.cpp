// SystemColors.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

void ScreenMainu()
{
    cout << "******************************************\n";
    cout << "Please Chose The Number of Your Color ?\n";
    cout << "(1) Read\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";
    cout << "******************************************\n\n";
    cout << "Your Choice ?\n";

}

void ReadNumberColor(int& Color)
{

    cin >> Color;
}

int CheckColor(int RunCode)
{

    enScreenColor Color;

    if (RunCode == enScreenColor::Red) return system("color 4f");
    else if (RunCode == enScreenColor::Blue) return system("color 1F");
    else if (RunCode == enScreenColor::Green) return system("color 2F");
    else if (RunCode == enScreenColor::Yellow) return system("color 6F");
    else cout << "Wrong Color" << endl;


    return RunCode;
}

int ScreenColor(int ScreenColor)
{

    return CheckColor(ScreenColor);
}

int main()
{

    int CData;

    ScreenMainu();
    ReadNumberColor(CData);
    ScreenColor(CData);

    return 0;
}

