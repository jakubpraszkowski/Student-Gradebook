//
// Created by kubuski on 26.05.23.
//

#include "Student.h"

#include <utility>

Student::Student(int _id, std::string _firstName, std::string _surname, std::string _university, int _score) {
    id = _id;
    firstName = std::move(_firstName);
    surname = std::move(_surname);
    university = std::move(_university);
    score = _score;
}

