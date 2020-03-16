#include <iostream>
#include <string>
#include "Person.h"
#include "Card.h"
#include "Circle.h"
#include "CardDeck.cpp"

#define Pi 3.14159

using std::cout;
using std::cin;
using std::endl;

void question1();
void question2();
void question3a();
void question3b();
void question3c();
void question3d();
void question4();
void question5();
void question6();

int main() {
    question1();
    question2();
    question3a();
    question3b();
    question3c();
    question3d();
    question4();
    question5();
    question6();
    return 0;
}

//outputs the answer of question 1 as a string
void question1() {
    cout << "QUESTION 1" << endl;
    cout << "(a)    #include is a way to include standard or user-defined files in a program." << endl;
    cout << "(b)    Main returns EXIT_SUCCESS or 0 which indicates that the program succeeds." << endl;
    cout << "(c)    Program outputs: d + i = 18" << endl << endl;
}

void question2() {
    cout << "QUESTION 2" << endl;
    Person person;
    person.enterPersonDetails();
    person.printPersonDetails();
    cout << "" << endl << endl;
}

void question3a() {
    cout << "QUESTION 3 (a)" << endl;
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void question3b() {
    cout << "QUESTION 3 (b)" << endl;
    for (int i = 0; i <= 5; i++) {
        for (int j = 5; j >= 0; j--) {
            if (j <= i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void question3c() {
    cout << "QUESTION 3 (c)" << endl;
    for (int i = 0; i <= 5; i++) {
        for (int j = 5; j >= 0; j--) {
            if (j <= i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void question3d() {
    cout << "QUESTION 3 (d)" << endl;
    for (int i = 0; i <= 5; i++) {
        for (int j = 5; j >= 0; j--) {
            if (j <= i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (j > i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        for (int k = 5; k > i; k--) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void question4() {
    cout << "QUESTION 4" << endl;
    Circle* circle = new Circle;
    circle->getRadius();
    double area = circle->findCircleArea(circle->radius);
    cout << "The area of the circle with radius " << circle->radius << " is " << area << endl << endl;
}

void question5() {
    cout << "QUESTION 5" << endl;
    CardDeck* deck = new CardDeck();
    deck->initialize();
    int input;

    cout << "Enter a number between 0 and 48: ";
    cin >> input;

    while(input < 0 || input > 48) {
        cout << "Error! Enter a number between 0 and 48: ";
        cin >> input;
    }

    deck->printCardDetails(input);
    cout << endl;
}

void question6() {
    cout << "QUESTION 6" << endl;
    int x = 0;
    int array[10] = { };
    int total = 0;

    while(x < 10) {
        cout << "Enter the " << "number " << x + 1 << ": ";
        cin >> array[x];
        x++;
    }

    for (int j : array) {
        total = total + j;
    }

    cout << "Enter total sum of the array is: " << total << endl << endl;
}

