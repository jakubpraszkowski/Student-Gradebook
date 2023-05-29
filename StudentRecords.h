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
    //std::unordered_map<Student*, std::unordered_map<std::string, double>> studentData;
    //std::unordered_map<std::string, std::pair<std::string, double>> studentData;

public:
//    void addStudentGrade(const std::string& studentName, const std::string& mark, double grade);
//    std::pair<std::string, double> getStudentGrade(const std::string& studentName);
    StudentRecords() = default;
    ~StudentRecords() = default;
    //void addStudentGrade(Student* student);
};

#endif //STUDENT_STUDENTRECORDS_H
