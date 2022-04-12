//
//  Character Details.cpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/11/22.
//

#include "Character Details.hpp"

ChacterDetail::ChacterDetail(string Name, int Health, int Defence, int specialAttack, int specialDefence, int Speed, int Damage, int Level){
    this->Name = Name;
    this->Health = Health;
    this->Defence = Defence;
    this->specialAttack = specialAttack;
    this->specialDefence = specialDefence;
    this->Speed = Speed;
    this->Damage = Damage;
    this->Level = Level;
}


int ChacterDetail::getHealth() {
    int IV2 = IV["health"];
    int num = 2*Health + IV2 + rand()% 64 + 10;
    return (floor(0.01*(num)*Level)) + Level + 10;
}

int ChacterDetail::getLevel() { 
    return Level;
}

void ChacterDetail::getIV() {
    /* {"health", rand()% 32},
     {"attack", rand()% 32},
     {"defence", rand()% 32},
     {"specialAttack", rand()% 32},
     {"specialDefence", rand()% 32},
     {"speed", rand()% 32}*/
    cout << IV["health"] << endl;
    cout << IV["attack"] << endl;
    cout << IV["defence"] << endl;
    cout << IV["specialAttack"] << endl;
    cout << IV["specialDefence"] << endl;
    cout << IV["speed"] << endl;
}



int ChacterDetail::getDefence(){
    return floor(0.01 * (2*Defence + IV["defence"] + rand()% 64 + 10)*Level) + 5;

}
int ChacterDetail::getSpecialAttack(){
    return floor(0.01 * (2*specialAttack + IV["specialAttack"] + rand()% 64 + 10)*Level) + 5;

}
int ChacterDetail::getSpecialDefence(){
    return floor(0.01 * (2*specialDefence + IV["specialDefence"] + rand()% 64 + 10)*Level) + 5;

}
int ChacterDetail::getSpeed(){
    return floor(0.01 * (2*Speed + IV["speed"] + rand()% 64 + 10)*Level) + 5;

}
int ChacterDetail::getAttack(){
    return floor(0.01 * (2*Damage + IV["attack"] + rand()% 64 + 10)*Level) +5;

}

   
string ChacterDetail::getName(){
    return Name;
}

ostream & operator<< (ostream& os, ChacterDetail& c){
    os << "Name: " << c.getName() << endl;
    os << "Level: " << c.getLevel() << endl;
    os << "Health: " << c.getHealth() << endl;
    os << "Attack: " << c.getAttack() << endl;
    os << "Defense: " << c.getDefence() << endl;
    os << "Special Attack: " << c.getSpecialAttack() << endl;
    os << "Special Defence: " << c.getSpecialDefence() << endl;
    os << "Speed: " << c.getSpeed() << endl;
    return os;
    
}
