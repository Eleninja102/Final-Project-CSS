//
//  AttackArea.hpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/24/22.
//

#ifndef AttackArea_hpp
#define AttackArea_hpp

#include <stdio.h>

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Queue.h"


#include "Character Details.hpp"
#include "Character List.hpp"
#include "All Lists.hpp"


using namespace std;

template<class Type>
class AttackArea;

template<class Type>
class AttackArea{
public:
    AttackArea(Type somehitng);
   // AttackArea(Type something);
    AttackArea(vector<Type> &CharactersLists);
    void attackMode();

    
private:
    int numberr;
    Queue<ChacterDetail> characterList;
    //characters selected2;
    ChacterDetail selected;


};

template<class Type>
AttackArea<Type>::AttackArea(vector<Type> &CharactersLists) {
    //selected2 = selected;
    //Characters.push_back(ChacterDetail("Squirtle", 44, 48, 65, 50, 64, 43));

   
    
}

template<class Type>
AttackArea<Type>::AttackArea(Type somehitng){
    
    for(int i = 0; i < somehitng.getSize(); i++){
       characterList.enqueue(somehitng.Characters[i]);
    }

    cout << "Choose Chracter" << endl;
    for(int i = 0; i < somehitng.getSize(); i++){
        cout << i << ". ";
        cout << somehitng.Characters[i].getName();
        cout << endl;
    }
    cout << "Choose Character: ";
    cin >> numberr;
    selected = somehitng.Characters[numberr];
    //cout << selected;
}


template<class Type>
void AttackArea<Type>:: attackMode(){
    int selection;
    while(!characterList.isEmpty() && selected.getHealth() >= 0){
        ChacterDetail x = characterList.peek();
        while(x.getHealth() >= 0 && selected.getHealth() >= 0){
            cout << endl;
            cout << x.getName() << "   LV: " << x.getLevel();
            cout << "  HP: "<< x.getHealth() << endl;

            cout << selected.getName() << "   LV: " << selected.getLevel();
            cout << "  HP: "<< selected.getHealth() << endl;
            cout << "1. Normal Attack" << endl;
            cout << "2. Special Attack" << endl;
            cout << "3. Heal" << endl;
            cout << "4. Abort" << endl;
            
            cin >> selection;
            cout << endl;
            switch (selection) {
                case 1:{
                    cout << "Attacked " << x.getName() << " for " << selected.getAttack() << endl;
                    x.setDamage(selected.getAttack());

                    break;
                }
                case 2:{
                    cout << "Attacked " << x.getName() << " for " << selected.getSpecialAttack() << endl;
                    x.setDamage(selected.getSpecialAttack());

                    break;
                }
                case 3:
                    cout << "Healed for " << selected.getSpecialDefence() << endl;
                    selected.setDamage(-selected.getSpecialDefence());

                    break;
                case 4:{
                    int x = selected.getHealth();
                    selected.setDamage(x);
                    break;
                }
                    
                default:
                    break;
            }
            if( x.getHealth() <= 0){
                cout << "It LOST!!" << endl;
            }else{
                int enemy = rand()% 3 + 1;
                //cout << enemy;
                switch (enemy) {
                    case 1:{
                        cout << "Attacked " << selected.getName() << " for " << x.getAttack() << endl;
                        selected.setDamage(x.getAttack());

                        break;
                    }
                    case 2:{
                        cout << "Attacked " << selected.getName() << " for " << x.getSpecialAttack() << endl;
                        selected.setDamage(x.getSpecialAttack());

                        break;
                    }
                    case 3:
                        cout << "Healed for " << x.getSpecialDefence() << endl;
                        x.setDamage(-x.getSpecialDefence());

                        break;
                    default:
                        break;
                }
            }
            if( selected.getHealth() <= 0){
                cout << "YOU LOST!!"<< endl;
                //break;
            }
        }
        int c = selected.getDamage();
        selected.setDamage(-c);
        characterList.dequeue();

    }
}



#endif /* AttackArea_hpp */
