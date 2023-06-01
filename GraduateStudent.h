#ifndef STUDENT_GRADUATESTUDENT_H
#define STUDENT_GRADUATESTUDENT_H
#include "Student.h"

class GraduateStudent :public Student {
    std::vector<GraduateStudent> graduateStudents;
    std::string supervisor, thesisTitle;
    int thesisMark, thesisStatus, thesisYear;

public:
    GraduateStudent(int _id, std::string _firstName, std::string _surname, std::string _university, int _score, std::string _supervisor, std::string _thesisTitle, int _thesisMark, int _thesisStatus, int _thesisYear);
    ~GraduateStudent() = default;
    void printStudent() const override;
    void showStudents() const override;
    void addStudent2List() override;
};

#endif //STUDENT_GRADUATESTUDENT_H
