//
// Created by kubuski on 26.05.23.
//

#ifndef STUDENT_STUDENT_H
#define STUDENT_STUDENT_H
#include <string>
#include <vector>

class Student {
    std::vector<Student> students;

protected:
    std::string firstName, surname, university;
    int id{}, score{};

public:
    Student() = default;
    ~Student() = default;
    Student(int _id, std::string _firstName, std::string _surname, std::string _university, int _score = 0);
    virtual double averageScore() = 0;
    virtual void print() const = 0;
    virtual void addStudent() = 0;
};

#endif //STUDENT_STUDENT_H
