#include <iostream>
#include "GraduateStudent.h"

GraduateStudent::GraduateStudent(int _id, std::string _firstName, std::string _surname, std::string _university,
                                 int _score, std::string _supervisor, std::string _thesisTitle, int _thesisMark,
                                 int _thesisStatus, int _thesisYear) {
    id = _id;
    firstName = std::move(_firstName);
    surname = std::move(_surname);
    university = std::move(_university);
    score = _score;
    supervisor = std::move(_supervisor);
    thesisTitle = std::move(_thesisTitle);
    thesisMark = _thesisMark;
    thesisStatus = _thesisStatus;
    thesisYear = _thesisYear;
}

void GraduateStudent::addStudent() {
    int id, score, thesisMark, thesisStatus, thesisYear;
    std::string firstName, surname, university, supervisor, thesisTitle;

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
    std::cout << "Enter supervisor: ";
    std::cin >> supervisor;
    std::cout << "Enter thesis title: ";
    std::cin >> thesisTitle;
    std::cout << "Enter thesis mark: ";
    std::cin >> thesisMark;
    std::cout << "Enter thesis status: ";
    std::cin >> thesisStatus;
    std::cout << "Enter thesis year: ";
    std::cin >> thesisYear;

    auto *graduateStudent = new GraduateStudent(id, firstName, surname, university, score, supervisor,
                                                           thesisTitle, thesisMark, thesisStatus, thesisYear);
    graduateStudents.push_back(*graduateStudent);
    //delete graduateStudent;
}

void GraduateStudent::showStudents() const {
    Student::showStudents();
}
