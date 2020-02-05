//
//  main.cpp
//  Project1
//
//  Created by Johnny Heidari on 1/28/20.
//  Copyright © 2020 Johnny Heidari. All rights reserved.
//
#include "Card.hpp"
#include "Deck.hpp"
#include <iostream>
using namespace std;

int menu();

int main() {
    // start the menu (with selection)
    int x = 0;
    while(true){
        x = menu();
        if(x == 1){
            Deck myDeck;
            myDeck.showDeck();
        }
        else if(x == 2){
            Card test;
            test.setCard('A', 'S');
            test.showCard();
        }
        else if (x == 5){
            cout<<"Thanks for playing! "<<endl;
        }
        else{
            cout<<"Invalid Opition"<<endl;
        }
        
    }
    return 0;
}

int menu(){
    cout<< "Welcome to Solitaire Prime!"<<endl;
    cout<< "1) New Deck"<<endl;
    cout<< "2) Display Deck"<<endl;
    cout<< "3) Shuffle Deck"<<endl;
    cout<< "4) Play Solitaire Prime!"<<endl;
    cout<< "5) Exit"<<endl;
    int x;
    cout << "Selection option: "<<endl; // Type a number and press enter
    cin>>x;
    return x;
}
