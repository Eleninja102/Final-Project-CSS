//
//  All Lists.hpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/11/22.
//

#ifndef All_Lists_hpp
#define All_Lists_hpp

#include <stdio.h>
#include "Character List.hpp"


class allList{
public:
    allList();
    void createDefault();
    void createGavin();
    void createNew();
    int printAndSelectList();
    
    
private:
    vector<characters> CharactersLists;

    
};

#endif /* All_Lists_hpp */
