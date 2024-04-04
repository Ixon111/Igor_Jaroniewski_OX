//
//  main.cpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 14/03/2024.
//
#include "Sedzia.hpp"
#include "Plansza.hpp"
#include "Gracz.hpp"
#include "Czlowiek.hpp"
#include "Komp.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int rozmiar;
    
    cout << "Witaj w grze w kolko i krzyzyk!" << endl;
    cout << "Podaj rozmiar planszy (NxN): ";
    cin >> rozmiar;
    
    Plansza p(rozmiar);
    
    Sedzia s(&p);
    s.gra(&p);

    

    return 0;
}
