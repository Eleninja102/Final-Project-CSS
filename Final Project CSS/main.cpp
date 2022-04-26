//
//  main.cpp
//  Final Project CSS
//
//  Created by Coleton Watt on 4/11/22.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Character Details.hpp"
#include "Character List.hpp"
#include "AttackArea.hpp"


using namespace std;
int main(int argc, const char * argv[]) {
    vector<characters> CharactersLists;
    characters Default("Default List");
    CharactersLists.push_back(Default);
    CharactersLists.push_back(characters("Unknown List"));
    CharactersLists.push_back(characters("Gavin's List"));
    int num;
    bool quiteGame = false;
    int selectList = 0;

    std::cout << "Welcome to Character Battle Tower" << endl;
    while(!quiteGame){
        cout << "Selected List: " << CharactersLists[selectList].getNameList() << endl;
        cout << "1. Select Character List"<< endl;
        cout << "2. Print Selected Characters"<< endl;
        cout << "3. Create Characters in List Selected"<< endl;
        cout << "4. Attack Mode"<< endl;

        cout << "5. Quit"<< endl;
        string listName;
        cin >> num;
        switch (num) {
            case 1:{
                bool notSelected = false;
                while(!notSelected){
                    cout << "Select Character List" << endl;
                    for(int i = 0; i < CharactersLists.size() + 1; i++){
                        if( i == CharactersLists.size()){
                            cout << i << " Create New List" << endl;
                            
                        }else{
                            cout << i << ". " << CharactersLists[i].getNameList() << endl;
                        }
                    }
                    cin >> selectList;
                    
                    if(selectList == CharactersLists.size()){
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
                        notSelected = true;
                    }else if(selectList > CharactersLists.size()){
                        selectList = 1;
                        cout << "Try Again" << endl;
                    }else{
                        notSelected = true;
                    }
                }
                break;
            }
            case 2:
                cout << CharactersLists[selectList];
                break;
            case 3:
                cin.ignore();
                CharactersLists[selectList].createCharRandom();
                break;
            case 4:{
                //characters y = ;
                AttackArea<characters>  varname(CharactersLists[selectList]);
                //cout << CharactersLists[selectList];
                varname.attackMode();
                break;
            }
            case 5:
                quiteGame = true;
                break;
                
            default:
                cout << "Try Again";
                break;
        }
    }
    cout << "GoodBye!" << endl;
  
    return 0;
}
