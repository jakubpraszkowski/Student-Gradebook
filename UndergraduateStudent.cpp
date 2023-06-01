#include "UndergraduateStudent.h"

UndergraduateStudent::UndergraduateStudent(int _id, std::string _firstName, std::string _surname,
                                           std::string _university, int _score, int _yearOfStudy,
                                           int _numberOfCourses, std::string _major, std::string _specialization) {

    id = _id;
    firstName = std::move(_firstName);
    surname = std::move(_surname);
    university = std::move(_university);
    score = _score;
    yearOfStudy = _yearOfStudy;
    numberOfCourses = _numberOfCourses;
    major = std::move(_major);
    specialization = std::move(_specialization);

}

void UndergraduateStudent::addStudent2List() {
    underText();
    auto *undergraduateStudent = new UndergraduateStudent(id, firstName, surname, university, score, yearOfStudy, numberOfCourses, major, specialization);
    undergraduateStudents.push_back(*undergraduateStudent);
}

void UndergraduateStudent::showStudents() const {
    if(undergraduateStudents.empty()) {
        std::cout << "No students to show" << std::endl;
        return;
    }
    for (const auto & undergraduateStudent : undergraduateStudents) {
        undergraduateStudent.printStudent();
    }
}

void UndergraduateStudent::printStudent() const {
    Student::printStudent();
    std::cout << "Year of study: " << yearOfStudy << std::endl;
    std::cout << "Number of courses: " << numberOfCourses << std::endl;
    std::cout << "Major: " << major << std::endl;
    std::cout << "Specialization: " << specialization << std::endl;
}

void UndergraduateStudent::underText() {
    addStudentU();
    std::cout << "Enter year of study: ";
    std::cin >> yearOfStudy;
    std::cout << "Enter number of courses: ";
    std::cin >> numberOfCourses;
    std::cout << "Enter major: ";
    std::cin >> major;
    std::cout << "Enter specialization: ";
    std::cin >> specialization;
    std::cout << std::endl;
}
