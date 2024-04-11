//
//  Sedzia.cpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 28/03/2024.
//

#include "Sedzia.hpp"
#include "Czlowiek.hpp"
#include "Gracz.hpp"
#include "Plansza.hpp"
#include "Komp.hpp"
#include <iostream>
using namespace std;

Sedzia::Sedzia(Plansza* plansza)
{
    pl = plansza;
}

Sedzia::~Sedzia()
{
    delete g1;
    delete g2;
}

void Sedzia::gra(Plansza* pl)
{
    int tryb;
    cout << "Wybierz tryb gry:\n(1) Gracz kontra komputer\n(2) Gracz kontra gracz\n(3) Komputer kontra komputer: ";
    cin >> tryb;
    kolejnoscgraczy(pl,tryb);
    int wynik=0;
    pl->wyświetl();
    do
    {
        
        g1->ruchGracza();
        pl->wyświetl();
        wynik = pl->sprawdźZwycięstwo();
        if(wynik!=0) break;
        wynik = pl->sprawdźRemis();
        if(wynik!=0) break;
        g2->ruchGracza();
        pl->wyświetl();
        wynik = pl->sprawdźZwycięstwo();
        if(wynik!=0) break;
        wynik = pl->sprawdźRemis();
        if(wynik!=0) break;
        

    }while(wynik==0);
    
    switch (wynik)
    {
        case 1:
        {
            cout<<endl<<"O wygrywa"<<endl;
            break;
        }
        case 5:
        {
            cout<<endl<<"X wygrywa"<<endl;
            break;
        }
        case 100:
        {
            cout<<endl<<"Remis"<<endl;
            break;
        }
    }
    
}

void Sedzia::kolejnoscgraczy(Plansza* pl,int tryb)
{

    
    char symbolGracza1;
    cout << "Wybierz symbol dla gracza 1 (X lub O): ";
    cin >> symbolGracza1;
    char symbolGracza2;
    
    symbolGracza2 = (symbolGracza1 == 'X')?'O':'X';
//jezeli uzytkownik poda bledne dane to zostanie przypisana warosc domyslna. jezeli dobre to znak sie nie zmieni.
    symbolGracza1 = (symbolGracza2 == 'X')?'O':'X';
    
    switch (tryb) 
    {
        case 1:
        {
            g1=new Czlowiek(symbolGracza1,pl);
            g2=new Komp(symbolGracza2,pl);
            break;
        }
        case 2:
        {
            g1=new Czlowiek(symbolGracza1,pl);
            g2=new Czlowiek(symbolGracza2,pl);
            break;
        }
        case 3:
        {
            g1=new Komp(symbolGracza1,pl);
            g2=new Komp(symbolGracza2,pl);
            break;
        }
        default:
            
            break;
    }
    
}

