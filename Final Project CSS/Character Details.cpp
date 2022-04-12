//
//  Character Details.cpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/11/22.
//

#include "Character Details.hpp"
ChacterDetail::ChacterDetail(string Name, int Health, int Defence, int specialAttack, int specialDefence, int Speed, int Damage){
    this->Name = Name;
    this->Health = Health;
    this->Defence = Defence;
    this->specialAttack = specialAttack;
    this->specialDefence = specialDefence;
    this->Speed = Speed;
    this->Damage = Damage;
    this->Level = 1;
}

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
    os << "\tName: " << c.getName() << endl;
    os << "\t\tLevel: " << c.getLevel() << endl;
    os << "\t\tHealth: " << c.getHealth() << endl;
    os << "\t\tAttack: " << c.getAttack() << endl;
    os << "\t\tDefense: " << c.getDefence() << endl;
    os << "\t\tSpecial Attack: " << c.getSpecialAttack() << endl;
    os << "\t\tSpecial Defence: " << c.getSpecialDefence() << endl;
    os << "\t\tSpeed: " << c.getSpeed() << endl;
    return os;
}


void ChacterDetail::newName(string rename){
    Name = rename;
}

void ChacterDetail::setLevel(int level){
    Level = level;
}
void ChacterDetail::incrementLevel(){
    Level++;
}
