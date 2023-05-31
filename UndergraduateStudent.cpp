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

void UndergraduateStudent::addStudent() {
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
    std::cout << "Enter year of study: ";
    std::cin >> yearOfStudy;
    std::cout << "Enter number of courses: ";
    std::cin >> numberOfCourses;
    std::cout << "Enter major: ";
    std::cin >> major;
    std::cout << "Enter specialization: ";
    std::cin >> specialization;
    std::cout << std::endl;

    auto *undergraduateStudent = new UndergraduateStudent(id, firstName, surname, university, score, yearOfStudy, numberOfCourses, major, specialization);
    Student::addStudent(undergraduateStudent);
}

void UndergraduateStudent::showStudents() const {
    Student::showStudents();

}
