//
//  Sedzia.hpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 28/03/2024.
//

#pragma once
#include "Plansza.hpp"
#include "Gracz.hpp"

class Sedzia
{
protected:
    Plansza* pl;
    Gracz *g1;
    Gracz *g2;

public:
    Sedzia(Plansza*);
    ~Sedzia();
    void gra(Plansza* pl);
    void kolejnoscgraczy(Plansza* pl,int tryb);
    
};
