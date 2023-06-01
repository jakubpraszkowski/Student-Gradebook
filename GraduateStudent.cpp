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

void GraduateStudent::addStudent2List() {
    addStudentU();
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

    auto graduateStudent = new GraduateStudent(id, firstName, surname, university, score, supervisor,
                                                           thesisTitle, thesisMark, thesisStatus, thesisYear);
    graduateStudents.push_back(*graduateStudent);
    delete graduateStudent;
}

void GraduateStudent::showStudents() const {
    if(graduateStudents.empty()) {
        std::cout << "No students to show" << std::endl;
        return;
    }
    for (const auto & graduateStudent : graduateStudents) {
        graduateStudent.printStudent();
    }
}

void GraduateStudent::printStudent() const {
    Student::printStudent();
    std::cout << "Supervisor: " << supervisor << std::endl;
    std::cout << "Thesis title: " << thesisTitle << std::endl;
    std::cout << "Thesis mark: " << thesisMark << std::endl;
    std::cout << "Thesis status: " << thesisStatus << std::endl;
    std::cout << "Thesis year: " << thesisYear << std::endl;
}
