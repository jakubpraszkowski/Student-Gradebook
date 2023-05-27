//
// Created by kubuski on 27.05.23.
//

#include "StudentRecords.h"
#include <iostream>

void StudentRecords::printMarkWeight() {
        for (auto &grade : markWeight) {
        std::cout << grade.first << " " << grade.second << std::endl;
    }
}

void StudentRecords::addStudentRecords(const std::string &studentName, const UndergraduateStudent &student,
                                       const std::string &mark, double grade) {
    double weight = markWeight[mark];
    studentData[studentName] = {student, {mark, grade}};

}

std::pair<std::string, double> StudentRecords::getStudentGradeData(const std::string &studentName) {
    auto it = studentData.find(studentName);
    if (it != studentData.end()) {
        return it->second.second;
    }
    return {"", 0.0};
}

double StudentRecords::getMarkWeight(const std::string &mark) {
    auto it = markWeight.find(mark);
    if (it != markWeight.end()) {
        return it->second;
    }
    return 0.0;
}
