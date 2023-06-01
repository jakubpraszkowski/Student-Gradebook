#ifndef STUDENT_STUDENTRECORDS_H
#define STUDENT_STUDENTRECORDS_H


#include <vector>
#include "Student.h"
#include "UndergraduateStudent.h"
#include <unordered_map>
#include <string>

class StudentRecords {
    std::vector<Student*> students;
public:
    void addStudent(Student *student);
    StudentRecords() = default;
    ~StudentRecords() = default;
};

#endif //STUDENT_STUDENTRECORDS_H
