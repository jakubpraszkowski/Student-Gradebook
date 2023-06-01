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

    inline std::string getFirstName() const { return firstName; }
    inline std::string getSurname() const { return surname; }
    inline std::string getUniversity() const { return university; }
    inline int getId() const { return id; }
    inline int getScore() const { return score; }

    void searchStudentByName(const std::vector<Student>& students, const std::string& type);
    void searchStudentById(const std::vector<Student>& students, const std::string& type);
    void addStudentU();

    virtual void printStudent() const;
    virtual void showStudents() const;
    virtual void addStudent2List();
};

#endif //STUDENT_STUDENT_H
