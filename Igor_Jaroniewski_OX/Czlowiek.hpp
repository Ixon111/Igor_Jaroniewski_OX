//
//  Czlowiek.hpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 21/03/2024.
//

#pragma once
#include "Gracz.hpp"

class Czlowiek:public Gracz
{
public:
    Czlowiek(char s,Plansza* p);
    void ruchGracza() override;
};
