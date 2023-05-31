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

void Student::deleteAllStudents() {
    for (auto & student : students) {
        delete student;
    }
    students.clear();
}

void Student::addStudent(Student *student) {
    students.push_back(student);
}

void Student::printStudent() const {
    std::cout << "Student: " << firstName << " " << surname << " from " << university << " with id: " << id << " and score: " << score << std::endl;
}

void Student::showStudents() const {
    std::cout << "Students: " << std::endl;
    if(students.empty()) {
        std::cout << "No students to show" << std::endl;
        return;
    }
    for (const auto & student : students) {
        student->printStudent();
    }

}
