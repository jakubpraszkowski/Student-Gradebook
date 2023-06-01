#include "Student.h"
#include <utility>
#include <iostream>

Student::Student(int _id, std::string _firstName, std::string _surname, std::string _university, int _score) {
    id = _id;
    firstName = std::move(_firstName);
    surname = std::move(_surname);
    university = std::move(_university);
    score = _score;
}

void Student::printStudent() const {
    std::cout << "Student: " << firstName << " " << surname << " from " << university << " with id: " << id << " and score: " << score << std::endl;
}

void Student::showStudents() const {
    if(students.empty()) {
        std::cout << "No students to show" << std::endl;
        return;
    }
    for (const auto & student : students) {
        student.printStudent();
    }
}

void Student::addStudent2List() {
    addStudentU();
    auto student = new Student(id, firstName, surname, university, score);
    students.push_back(*student);
    delete student;
}

void Student::addStudentU() {
    std::cout << "Enter id: ";
    std::cin >> id;
    std::cout << "Enter first name: ";
    std::cin >> firstName;
    std::cout << "Enter surname: ";
    std::cin >> surname;
    std::cout << "Enter university: ";
    std::cin >> university;
    std::cout << "Enter score: ";
    std::cin >> score;
}

void Student::searchStudentByName(const std::vector<Student>& _students, const std::string& type) {
    std::cout << "Enter the name of the " << type << " student you want to search for: ";
    std::string name;
    std::cin >> name;

    bool found = false;
    short duplicates = 0;
    for (const auto& student : students) {
        if (student.getFirstName() == name) {
            found = true;
            duplicates++;
            std::cout << "Student found!" << std::endl;
            if (duplicates >= 2) {
                std::cout << "There are at least " << duplicates << " students with the same name." << std::endl;
                std::cout << "Please enter the surname of the student you want to search for: ";
                std::string _surname;
                std::cin >> _surname;
                if (student.getSurname() == _surname) {
                    std::cout << "Surname: " << student.getSurname() << std::endl;
                    std::cout << "University: " << student.getUniversity() << std::endl;
                    std::cout << "Score: " << student.getScore() << std::endl;
                }
            }
        }
    }

    if (!found) {
        std::cout << "Student not found." << std::endl;
    }
}

void Student::searchStudentById(const std::vector<Student> &_students, const std::string& type) {
    std::cout << "Enter the id of the student you want to search for: ";
    int id;
    std::cin >> id;

    bool found = false;
    for (const auto& student : students) {
        if (student.getId() == id) {
            found = true;
            std::cout << "Student found!" << std::endl;
            std::cout << "Name: " << student.getFirstName() << std::endl;
            std::cout << "Surname: " << student.getSurname() << std::endl;
            std::cout << "University: " << student.getUniversity() << std::endl;
            std::cout << "Score: " << student.getScore() << std::endl;
        }
    }

    if (!found) {
        std::cout << "Student not found." << std::endl;
    }
}
