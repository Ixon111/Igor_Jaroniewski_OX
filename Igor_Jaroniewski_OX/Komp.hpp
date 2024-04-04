//
//  Komp.hpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 21/03/2024.
//

#pragma once
#include "Gracz.hpp"

class Komp:public Gracz
{
public:
    Komp(char s,Plansza* p);
    void ruchGracza() override;
};
