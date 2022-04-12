//
//  Character Details.hpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/11/22.
//

#ifndef Character_Details_hpp
#define Character_Details_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <map>
#include <stdlib.h>
#include <time.h>
using namespace std;

class ChacterDetail{
public:
    ChacterDetail(string Name, int Health, int Defence, int specialAttack, int specialDefence, int Speed, int Damage, int Level);
    int getHealth();
    int getLevel();
    void getIV();
    int getDefence();
    int getSpecialAttack();
    int getSpecialDefence();
    int getSpeed();
    int getAttack();
    string getName();
    friend ostream & operator<< (ostream& os, ChacterDetail& c);

    
private:
    string Name;
    int Health;
    int Defence;
    int specialAttack;
    int specialDefence;
    int Speed;
    int Damage;
    int Level;
    map <string, int> IV = {
        {"health", rand()% 32},
        {"attack", rand()% 32},
        {"defence", rand()% 32},
        {"specialAttack", rand()% 32},
        {"specialDefence", rand()% 32},
        {"speed", rand()% 32}
    };
    
};

#endif /* Character_Details_hpp */
