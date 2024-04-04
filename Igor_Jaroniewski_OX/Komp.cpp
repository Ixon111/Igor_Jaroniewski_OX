//
//  Komp.cpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 21/03/2024.
//

#include "Komp.hpp"
#include <iostream>
using namespace std;

Komp::Komp(char s, Plansza* p) :Gracz(s,p) {}

void Komp::ruchGracza()
{
    int i, j;
    do {
        i = rand() % pl->rozmiar;
        j = rand() % pl->rozmiar;
    } while (!pl->ustaw(i, j, symbol));
}
