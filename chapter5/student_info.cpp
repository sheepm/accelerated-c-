//
// Created by Administrator on 2017/4/30 0030.
//

#include <istream>
#include <list>
#include "student_info.h"
#include "grade.h"

using namespace std;

bool compare(const Student_info &x, const Student_info &y) {
    return x.name < y.name;
}

istream &read(istream &is, Student_info &s) {
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);
}

istream &read_hw(istream &in, vector<double> &hw) {
    if (in) {
        hw.clear();

        double x;
        while (in >> x) {
            hw.push_back(x);
        }
        in.clear();
    }
    return in;
}

list<Student_info> extract_fails(list<Student_info>& students){
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();

    while (iter != students.end()){
        if (fgrade(*iter)){
            fail.push_back(*iter);
            iter = students.erase(iter);
        } else{
            iter++;
        }
    }
    return fail;
}
