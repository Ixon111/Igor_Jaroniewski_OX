//
//  Plansza.hpp
//  Igor_Jaroniewski_OX
//
//  Created by Igor Jaroniewski on 14/03/2024.
//

#pragma once

class Plansza
{
    
private:
    char** pl;
    
public:
    int rozmiar;
    Plansza(int x);
    Plansza();
    ~Plansza();
    void wyświetl();
    bool ustaw(int i, int j, char symbol);
    int sprawdźZwycięstwo();
    int sprawdźRemis();
    
};
