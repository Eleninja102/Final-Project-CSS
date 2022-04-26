//
//  AttackArea.cpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/24/22.
//

#include "AttackArea.hpp"

template<class Type>
AttackArea<Type>::AttackArea(vector<Type> &CharactersLists) {
    //selected2 = selected;
    //Characters.push_back(ChacterDetail("Squirtle", 44, 48, 65, 50, 64, 43));

    for(int i = 0; i < CharactersLists.size(); i++){
        characterList.enqueue(CharactersLists[i]);
    }
    
}
