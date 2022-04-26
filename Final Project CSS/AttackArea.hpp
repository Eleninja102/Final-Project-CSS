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


using namespace std;

template<class Type>
class AttackArea;

template<class Type>
class AttackArea{
public:
    //AttackArea();
    AttackArea(vector<Type> &CharactersLists);
    

    
private:
    
    Queue<Type> characterList;
    //characters selected2;


};
#endif /* AttackArea_hpp */
