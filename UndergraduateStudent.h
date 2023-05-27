//
// Created by kubuski on 26.05.23.
//

#ifndef STUDENT_UNDERGRADUATESTUDENT_H
#define STUDENT_UNDERGRADUATESTUDENT_H
#include "Student.h"


class UndergraduateStudent : public Student{
    int yearOfStudy, averageMark, numberOfCourses;
    std::string major, specialization;

public:
    UndergraduateStudent(int _id, std::string _firstName, std::string _surname, std::string _university, int _score, int _yearOfStudy, int _averageMark, int _numberOfCourses, std::string _major, std::string _specialization);
    ~UndergraduateStudent() = default;
    double averageScore() const override;
};


#endif //STUDENT_UNDERGRADUATESTUDENT_H
