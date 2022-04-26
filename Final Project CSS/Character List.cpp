//
//  Character List.cpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/11/22.
//

#include "Character List.hpp"
characters::characters(string nameList){
        NameList = nameList;
}

void characters::createChar(){
    string Name;
    int Health;
    int Defence;
    int specialAttack;
    int specialDefence;
    int Speed;
    int Damage;
    int Level;
    bool nameExist = false;
    cout << "Character Creation Tool" << endl;
    do{
        printf("Name: ");
        getline(cin, Name);
        for(auto & x : Characters){
            if(Name == x.getName()){
                nameExist = false;
                printf("Name Taken Try Again");
                break;
            }
            nameExist = true;
        }
        cout << endl;
    }while(!nameExist);
    cout << "Insert Number Value Greater Then 1"<< endl;
    printf("Health: ");
    cin >> Health;
    printf("Defence: ");
    cin >> Defence;
    printf("Special Attack: ");
    cin >> specialAttack;
    printf("Special Defence: ");
    cin >> specialDefence;
    printf("Speed: ");
    cin >> Speed;
    printf("Damage: ");
    cin >> Damage;
    printf("Speed: ");
    cin >> Speed;
    printf("Level: ");
    cin >> Level;
    Characters.push_back(ChacterDetail(Name, Health, Defence, specialAttack, specialDefence, Speed, Damage, Level));
    cout << "Character Created" << endl;

}
void characters::createDefault(){
    Characters.push_back(ChacterDetail("Squirtle", 44, 48, 65, 50, 64, 43));
    Characters.push_back(ChacterDetail("Ai Hayasaka", 72, 48, 75, 80, 204, 90));
}
void characters::createCharRandom(){
    cout << "Character Creation Tool" << endl;
    string Name;
    bool nameExist = false;
    do{
        printf("Name: ");
        getline(cin, Name);
        for(auto & x : Characters){
            if(Name == x.getName()){
                nameExist = false;
                printf("Name Taken Try Again");
                break;
            }
            nameExist = true;
        }
        cout << endl;
    }while(!nameExist);
    Characters.push_back(ChacterDetail(Name, rand()% 255 + 10, rand()% 255 + 10, rand()% 255 + 10, rand()% 255 + 10, rand()% 255 + 10, rand()% 255 + 10));
    cout << "Character Created" << endl;
}

void characters::gavinsList(){
    string nameList []= {"Ai Hayasaka","Pyra", "Lefiya Viridis", "Kaguya Yamai", "Marin Kitigawa", "Aiz Wallenstein", "Yuzuru Yama", "Mythra", "Alice Zuberg", "Nodoka Toyohama", "Miku Izayoi", "Nino Nakano", "Marin Kitagawa"};
    for(auto NameList: nameList){
        Characters.push_back(ChacterDetail(NameList, rand()% 255 + 10, rand()% 255 + 10, rand()% 255 + 10, rand()% 255 + 10, rand()% 255 + 10, rand()% 255 + 10));
    }
    NameList = "Gavin's List";
    
}

string characters::getNameList(){
    return NameList;
}





ostream & operator<< (ostream& os, characters& c){
    os << "---------------------------------" << endl;
    os << "Characters" << endl;
    os << "---------------------------------" << endl;

    for(auto & x : c.Characters){
        os << x;
        os << endl;
    }
    os << "---------------------------------" << endl;

    return os;
}




characters &characters::operator=(const characters &other) {
    Characters = other.Characters;
    return *this;
}
