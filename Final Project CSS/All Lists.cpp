//
//  All Lists.cpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/11/22.
//

#include "All Lists.hpp"


allList::allList(){
    
}

void allList::createDefault(){
    CharactersLists.push_back(characters("Default List"));
    
    CharactersLists[0].createDefault();

}


void allList::createGavin(){
    CharactersLists.push_back(characters("Gavin's List"));
    CharactersLists[1].gavinsList();

}


void allList::createNew(){
    string listName;
    char question;
    cin.ignore();
    cout << "List Name: ";
    getline(cin, listName);
    characters newList (listName);
    cout << "Copy Default List (Y/N)";
    cin >> question;
    if(question == 'Y' || question == 'y'){
        newList = CharactersLists[0];
    }
    CharactersLists.push_back(newList);
}

int allList::printAndSelectList(){
    int selectList = 1;
    bool notSelected = true;
    while(notSelected){
        cout << "Select Character List" << endl;
        for(int i = 0; i < CharactersLists.size() + 1; i++){
            if( i == CharactersLists.size()){
                cout << i << ". Create New List" << endl;
            }else{
                cout << i << ". " << CharactersLists[i].getNameList() << endl;
            }
            
        }
        cin >> selectList;
        
        if(selectList == CharactersLists.size()){
            createNew();
            notSelected = false;
        }else if(selectList > CharactersLists.size()){
            cout << "Try Again" << endl;
            notSelected = true;
        }else{
            notSelected = false;
        }
    }
    return selectList;
}
