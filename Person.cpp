//
// Created by jeanette roga on 12/3/20.
//

#include "Person.h"

class Person {
public:
    std::string firstName;
    std::string lastName;
    int age;
    std::string dob;

    void enterPersonDetails() {
        std::cout << "Enter your first name : ";
        std::cin >> firstName;

        std::cout << "Enter your last name : ";
        std::cin >> lastName;

        std::cout << "Enter your age: ";
        std::cin >> age;

        std::cout << "Enter your date of birth in format (dd/mm/yyyy): ";
        std::cin >> dob;
    }

    void printPersonDetails() {
        std::cout << "Name: " << firstName << " " << lastName << std::endl;

        std::cout << "Age: " << age << std::endl;

        std::cout << "Date of Birth: " << dob << std::endl;
    }
};
