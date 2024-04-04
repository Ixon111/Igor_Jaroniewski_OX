//
//  Czlowiek.cpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 21/03/2024.
//

#include "Czlowiek.hpp"
#include <iostream>
using namespace std;

Czlowiek::Czlowiek(char s, Plansza* p) :Gracz(s,p) {}

void Czlowiek::ruchGracza()
{
    int i, j;
    cout << "Podaj współrzędne x oraz y: ";
    cin >> i >> j;
    if (i < 0 || i >= pl->rozmiar || j < 0 || j >= pl->rozmiar || !pl->ustaw(i, j, symbol))
    {
        cout << "Nieprawidłowy ruch. Spróbuj ponownie." << endl;
        ruchGracza();
    }
}
