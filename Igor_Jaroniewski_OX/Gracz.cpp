//
//  Gracz.cpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 21/03/2024.
//

#include "Gracz.hpp"
#include <iostream>
using namespace std;

Gracz::Gracz(char s, Plansza* plansza)
{
    symbol = s;
    pl = plansza;
}
void Gracz::ruchGracza()
{
    int i, j;
    cout << "Twój ruch (podaj współrzędne x oraz y): ";
    cin >> i >> j;

    if (i < 0 || i >= pl->rozmiar || j < 0 || j >= pl->rozmiar || !pl->ustaw(i, j, symbol)) 
    {
        cout << "Nieprawidłowy ruch. Spróbuj ponownie." << endl;
        ruchGracza();
    }
}
