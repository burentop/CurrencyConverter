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
    constexpr double yn_per_dollar = 0.0099;
    constexpr double kr_per_dollar = 0.15;
    constexpr double pd_per_dollar = 1.29;
    constexpr double yu_per_dollar = 0.15;
    
    double amount = 1;
    
    char currency = ' ';
    
    cout << "Please enter an amount followed by a currency (y, k, u or p - for 'yen', 'kroner', 'yuan' or 'pound'): ";
    cin >> amount >> currency;
    
    switch (currency) {
        case 'y':
            cout << amount << "yen == " << yn_per_dollar*amount << "dollars\n";
            break;
        case 'k':
            cout << amount << "kroner == " << kr_per_dollar*amount << "dollars\n";
            break;
        case 'p':
            cout << amount << "pound == " << pd_per_dollar*amount << "dollars\n";
            break;
        case 'u':
            cout << amount << "yuan == " << yu_per_dollar*amount << "dollars\n";
            break;
        default:
            cout << "Sorry, I don't know a currency called '" << currency << "'\n";
            break;
    }
}
