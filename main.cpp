//
//  main.cpp
//  Project Zero
//
//  Created by Sierra on 8/19/15.
//  Copyright (c) 2015 Sierra Adibi. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
    int numofmachines = 3;
    int currentmachine;
    int machine1 [] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10};
    int machine2 [] = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6, 6, 7, 7, 7, 7, 8, 8, 9, 10, 10};
    int machine3 [] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 9, 9, 10, 10, 10};
    
    
    cout << "Welcome to the Multi-Armed Bandit \n";
    cout << "There are " << numofmachines << " machines available for play. \n";
    cout << "Which machine would you like to play first? \n";
    cin >> currentmachine;
    
    if(currentmachine <= numofmachines){
        cout << "You are playing machine number " << currentmachine;
    }

    return 0;
}
