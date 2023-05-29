//
// Created by kubuski on 26.05.23.
//

#ifndef STUDENT_GRADUATESTUDENT_H
#define STUDENT_GRADUATESTUDENT_H
#include "Student.h"

class GraduateStudent :public Student {
    std::string supervisor, thesisTitle;
    int thesisMark, thesisStatus, thesisYear;

public:
    GraduateStudent(int _id, std::string _firstName, std::string _surname, std::string _university, int _score, std::string _supervisor, std::string _thesisTitle, int _thesisMark, int _thesisStatus, int _thesisYear);
    ~GraduateStudent() = default;
    double averageScore() override;
    void print() const override;
    void addStudent() override;
};


#endif //STUDENT_GRADUATESTUDENT_H
