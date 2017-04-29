//
// Created by Administrator on 2017/4/30 0030.
//

#include <istream>
#include "student_info.h"

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
