#include <iostream>
#include <vector>
#include "student_info.h"
#include "grade.h"

using namespace std;

int main() {
    vector<Student_info> did ,didnt;

    Student_info student;

    while (read(cin,student)){
        if (did_all_hw(student)){
            did.push_back(student);
        } else{
            didnt.push_back(student);
        }
    }
    return 0;
}