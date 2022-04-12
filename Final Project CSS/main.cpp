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

using namespace std;
int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    srand((unsigned) time(NULL));
    ChacterDetail x ("Squirtle", 44, 48, 65, 50, 64, 43, 100);
    cout << x;

    // insert code here...
    return 0;
}
