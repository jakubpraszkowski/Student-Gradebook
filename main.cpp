#include <iostream>
#include "Student.h"
#include "UndergraduateStudent.h"
#include "GraduateStudent.h"

int main() {
    auto *student2 = new UndergraduateStudent(2, "Jane", "Doe", "MIT", 9, 1, 1, "Mathematics", "Algebra");

    return 0;
}
