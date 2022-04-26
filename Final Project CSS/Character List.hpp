//
//  Character List.hpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/11/22.
//

#ifndef Character_List_hpp
#define Character_List_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "Character Details.hpp"


using namespace std;

class characters{
public:
    characters();
    characters(string nameList);
    void createChar();
    void createCharRandom();
    void createDefault();
    void rename(string name);
    string getNameList();
    void gavinsList();
    friend ostream & operator<< (ostream& os, characters& c);
    characters& operator=(const characters& other);

    
    
private:
    vector<ChacterDetail> Characters;
    string NameList;
    
};

#endif /* Character_List_hpp */
