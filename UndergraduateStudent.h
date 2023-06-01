#ifndef STUDENT_UNDERGRADUATESTUDENT_H
#define STUDENT_UNDERGRADUATESTUDENT_H
#include "Student.h"
#include <iostream>
#include <unordered_map>

class UndergraduateStudent : public Student{
    std::vector<UndergraduateStudent> undergraduateStudents;
    int yearOfStudy, numberOfCourses;
    std::string major, specialization;

public:
    UndergraduateStudent(int _id, std::string _firstName, std::string _surname, std::string _university, int _score, int _yearOfStudy, int _numberOfCourses, std::string _major, std::string _specialization);
    UndergraduateStudent() = default;
    ~UndergraduateStudent() = default;
    void printStudent() const override;
    void showStudents() const override;
    void addStudent2List() override;
    void underText();
};

#endif //STUDENT_UNDERGRADUATESTUDENT_H
