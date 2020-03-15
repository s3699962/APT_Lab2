//
// Created by jeanette roga on 12/3/20.
//

#ifndef LAB2_CARDDECK_H
#define LAB2_CARDDECK_H

#include <iostream>
#include "Card.h"

class CardDeck {
    Card deck[48] = { };
public:
    void initialize() {
        int i = 0;
        int input;
        while (i <= 48) {
            std::string colour = getColour(i);
            for (int j = 1; j <= 7; j++) {
                Card card;
                card.uniqueNumber = i;
                card.colourNumber = j;
                card.colour = colour;

                deck[i] = card;
                i++;
            }
        }
    }

    static std::string getColour(int i) {
        switch(i) {
            case 0:
                return "Red";
            case 7:
                return "Orange";
            case 14:
                return "Yellow";
            case 21:
                return "Green";
            case 28:
                return "Blue";
            case 35:
                return "Indigo";
            case 42:
                return "Violet";
        }
    }

    void printCardDetails(int card) {
        std::cout << "Card " << card << " is: " << deck[card].colour << " " << deck[card].colourNumber << std::endl;
    }
};


#endif //LAB2_CARDDECK_H
