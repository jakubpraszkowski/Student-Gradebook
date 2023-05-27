cmake_minimum_required(VERSION 3.24)
project(Student)

set(CMAKE_CXX_STANDARD 17)

add_executable(Student main.cpp Student.cpp Student.h UndergraduateStudent.cpp UndergraduateStudent.h GraduateStudent.cpp GraduateStudent.h StudentRecords.cpp StudentRecords.h)
