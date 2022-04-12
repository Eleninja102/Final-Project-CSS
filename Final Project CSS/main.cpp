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
        cout << "5. Quit"<< endl;

        cin >> num;
        switch (num) {
            case 1:{
                bool notSelected = false;
                while(!notSelected){
                    cout << "Select Character List" << endl;
                    for(int i = 0; i < CharactersLists.size() + 1; i++){
                        if( i == CharactersLists.size()){
                            cout << i << " Create New List" << endl;
                            string listName;
                            getline(cin, listName);
                            CharactersLists.push_back(characters(listName));
                        }else{
                            cout << i << ". " << CharactersLists[i].getNameList() << endl;
                        }
                    }
                    cin >> selectList;
                    if( selectList == CharactersLists.size() + 1){
                        cout << "not coded" << endl;
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
                cout << "Hmmm";
                break;
            case 4:
                cout << "Hmmm";
                break;
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
