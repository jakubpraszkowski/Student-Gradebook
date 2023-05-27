//
// Created by kubuski on 27.05.23.
//

#ifndef STUDENT_STUDENTRECORDS_H
#define STUDENT_STUDENTRECORDS_H


#include <vector>
#include "Student.h"
#include "UndergraduateStudent.h"
#include <unordered_map>
#include <string>

class StudentRecords {
    std::unordered_map<std::string, std::pair<UndergraduateStudent, std::pair<std::string, double>>> studentData;
    std::unordered_map<std::string, double> markWeight {
            {"Exam", 2.0},
            {"Test", 1.0},
            {"Project", 3.0},
            {"Homework", 1.0}
    };
public:
    void addStudentRecords(const std::string& studentName, const UndergraduateStudent& student, const std::string& mark, double grade);
    std::pair<std::string, double> getStudentGradeData(const std::string& studentName);
    double getMarkWeight(const std::string& mark);
    void printMarkWeight();

};


#endif //STUDENT_STUDENTRECORDS_H
