#include "Menu.h"

void Menu::clearScreen() {
#ifdef WINDOWS
    std::system("cls");
#else
    std::system ("clear");
#endif
}

void Menu::mainMenuText() {
    std::cout << "Welcome to the student management system!" << std::endl;
    std::cout << "You can search for three types of students: Graduate, Undergraduate, and Other." << std::endl;
    std::cout << "Please choose one of the following options:" << std::endl;
    std::cout << "1. Add a student" << std::endl;
    std::cout << "2. Search for a student" << std::endl;
    std::cout << "3. Show all students" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

void Menu::mainMenu() {
    mainMenuText();
    std::cin >> choice;
    clearScreen();
}

void Menu::addStudentMenu() {
    addStudentMenuText();
    std::cin >> choice;
        switch(choice) {
            case 1: {
                auto student = new UndergraduateStudent();
                student->addStudent2List();

                delete student;
                break;
            }
        }
    clearScreen();
}

void Menu::addStudentMenuText() {
    std::cout << "Please choose one of the following options:" << std::endl;
    std::cout << "1. Add a graduate student" << std::endl;
    std::cout << "2. Add an undergraduate student" << std::endl;
    std::cout << "3. Add an other student" << std::endl;
    std::cout << "4. Back to main menu" << std::endl;
    std::cout << "Enter your choice: ";
}
