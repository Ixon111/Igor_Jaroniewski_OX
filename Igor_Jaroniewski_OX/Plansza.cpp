//
//  Plansza.cpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 14/03/2024.
//

#include "Plansza.hpp"
#include <iostream>
using namespace std;

Plansza::~Plansza()
{
    for(int i=0;i<rozmiar;i++)
        delete[]pl[i];
    delete[]pl;
}

Plansza::Plansza(int x)
{
    rozmiar = x;
    pl = new char* [x];
    for(int i=0;i<x;i++)
        pl[i]=new char [x];
}

Plansza::Plansza()
{
    rozmiar = 3;
    pl = new char* [3];
    for(int i=0;i<3;i++)
        pl[i]=new char [3];
}

void Plansza::wyświetl()
{
    cout<<endl;
    for(int i=0;i<rozmiar;i++)
    {
        for(int j=0;j<rozmiar;j++)
        {
            cout<<pl[i][j];

            if(j<rozmiar-1) cout << " | ";
            if(i==rozmiar-1 and j==rozmiar-1) cout<<endl;

        }
        if(i==rozmiar-1);
        else
        {
            cout<<endl;
            for(int k=0;k<rozmiar-1;k++)
                cout<< "----";
            cout<<endl;
        }
    }
    cout<<endl;
}

bool Plansza::ustaw(int i, int j, char symbol)
{
    if(pl[i][j]!='X' && pl[i][j]!='O')
    {
        pl[i][j]=symbol;
        return true;
    }
    else return false;
}

int Plansza::sprawdźZwycięstwo()
{
    // poziom
    for(int i = 0; i < rozmiar; ++i) 
    {
        int wygrana = 0;
        for(int j = 0; j < rozmiar; ++j)
        {
            if(pl[i][j] != 0)
            {
                wygrana += pl[i][j];
            }
        }
        if(wygrana==79*rozmiar) return 1;
        if(wygrana==88*rozmiar) return 5;
    }
    
    // pion
    for(int j = 0; j < rozmiar; ++j) 
    {
        int wygrana = 0;
        for(int i = 0; i < rozmiar; ++i)
        {
            if(pl[i][j] != 0)
            {
                wygrana += pl[i][j];
            }
        }
        if(wygrana==79*rozmiar) return 1;
        if(wygrana==88*rozmiar) return 5;
    }
    
    // skos
    int wygrana1 = 0;
    int wygrana2 = 0;
    for(int i = 0; i < rozmiar; ++i)
    {
        wygrana1 += pl[i][i];
        wygrana2 += pl[i][rozmiar - 1 - i];
        
    }
    if(wygrana1==79*rozmiar or wygrana2==79*rozmiar) return 1;
    else if(wygrana1==88*rozmiar or wygrana2==88*rozmiar) return 5;
    
    return 0;
}

int Plansza::sprawdźRemis()
{
    for(int i = 0; i < rozmiar; ++i) 
    {
        for(int j = 0; j < rozmiar; ++j) 
        {
            if(pl[i][j] != 'X' && pl[i][j] != 'O')
                return 0;
        }
    }
    return 100;
}
