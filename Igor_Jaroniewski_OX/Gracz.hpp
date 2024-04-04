//
//  Gracz.hpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 21/03/2024.
//

#pragma once

#include "Plansza.hpp"

class Gracz
{
protected:
    char symbol;
    Plansza* pl;
    
public:
    
    Gracz(char, Plansza*);
    
    virtual void ruchGracza()=0;
    
};
