#ifndef STUDENT_MENU_H
#define STUDENT_MENU_H

#include "GraduateStudent.h"
#include "UndergraduateStudent.h"
#include "Student.h"
#include "StudentRecords.h"
#include <utility>

class Menu {
    short choice;
public:
    static void clearScreen();
    void mainMenu();
    static void mainMenuText();
    static void addStudentMenuText();
    void addStudentMenu();
};

#endif //STUDENT_MENU_H
