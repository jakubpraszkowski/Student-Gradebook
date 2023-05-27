//
// Created by kubuski on 26.05.23.
//

#ifndef STUDENT_UNDERGRADUATESTUDENT_H
#define STUDENT_UNDERGRADUATESTUDENT_H
#include "Student.h"
#include "StudentRecords.h"
#include <iostream>
#include <unordered_map>


class UndergraduateStudent : public Student{
    int yearOfStudy, numberOfCourses;
    std::string major, specialization;
    std::unordered_map<Student, StudentRecords> studentRecords;

public:
    UndergraduateStudent(int _id, std::string _firstName, std::string _surname, std::string _university, int _score, int _yearOfStudy, int _numberOfCourses, std::string _major, std::string _specialization);
    ~UndergraduateStudent() = default;
    double averageScore() override;
    void print() const override;
    void addStudent() override;
};


#endif //STUDENT_UNDERGRADUATESTUDENT_H
