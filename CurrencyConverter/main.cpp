//
//  main.cpp
//  CurrencyConverter
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    constexpr double cm_per_inch = 2.54;
    
    double length = 1;
    
    char unit = ' ';
    
    cout << "Please enter a length followed by a unit (c or i): ";
    cin >> length >> unit;
    
    if (unit == 'i')
        cout << length << "in == " << cm_per_inch*length << "cm\n";
    else if (unit == 'c')
        cout << length << "cm == " << length/cm_per_inch << "in\n";
    else
        cout << "Sorry, I don't know a unit called '" << unit << "'\n";
}
