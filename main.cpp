#include <iostream>
#include <string>
#include "Person.h"
#include "Card.h"
#include "Circle.h"
#include "CardDeck.h"

#define Pi 3.14159

void question2();
void question3a();
void question3b();
void question3c();
void question3d();
void question4();
void question5();
void question6();
std::string getColour(int i);
Card findCard(Card *deck, int input);

int main() {
    //question2();
    //question3a();
    //question3b();
    //question3c();
    //question3d();
    //question4();
    question5();
    //question6();
    return 0;
}

void question2() {
    std::cout << "QUESTION 2" << std::endl;
    Person person;
    person.enterPersonDetails();
    person.printPersonDetails();
    std::cout << "" << std::endl;
}

void question3a() {
    std::cout << "QUESTION 3 (a)" << std::endl;
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "" << std::endl;
}

void question3b() {
    std::cout << "QUESTION 3 (b)" << std::endl;
    for (int i = 0; i <= 5; i++) {
        for (int j = 5; j >= 0; j--) {
            if (j <= i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << "" << std::endl;
}

void question3c() {
    std::cout << "QUESTION 3 (c)" << std::endl;
    for (int i = 0; i <= 5; i++) {
        for (int j = 5; j >= 0; j--) {
            if (j <= i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        for (int k = 0; k < i; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "" << std::endl;
}

void question3d() {
    std::cout << "QUESTION 3 (d)" << std::endl;
    for (int i = 0; i <= 5; i++) {
        for (int j = 5; j >= 0; j--) {
            if (j <= i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        for (int k = 0; k < i; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (j > i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        for (int k = 5; k > i; k--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "" << std::endl;
}

void question4() {
    std::cout << "QUESTION 4" << std::endl;
    Circle circle;
    circle.getRadius();
    double area = circle.findCircleArea(circle.radius);
    std::cout << "The area of the circle with radius " << circle.radius << " is " << area << std::endl;
}

void question5() {
    std::cout << "QUESTION 5" << std::endl;
    CardDeck deck;
    deck.initialize();
    int input;

    std::cout << "Enter a number between 0 and 48: ";
    std::cin >> input;

    while(input < 0 || input > 48) {
        std::cout << "Error! Enter a number between 0 and 48: ";
        std::cin >> input;
    }

    deck.printCardDetails(input);
}

void question6() {
    std::cout << "QUESTION 6" << std::endl;
    int x = 0;
    int array[10] = { };
    int total = 0;

    while(x < 10) {
        std::cout << "Enter the " << x + 1 << "st " << "number: ";
        std::cin >> array[x];
        x++;
    }

    for (int j : array) {
        total = total + j;
    }

    std::cout << "Enter total sum of the array is: " << total << std::endl;
}

