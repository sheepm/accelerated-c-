//
// Created by Administrator on 2017/4/30 0030.
//

#include <stdexcept>
#include "median.h"
#include "student_info.h"

using namespace std;

double grade(double midterm, double final, double homework) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw) {
    if (hw.size() == 0) {
        throw domain_error("student have no homework");
    }
    return grade(midterm, final, median(hw));
}

double grade(const Student_info &s) {
    return grade(s.midterm, s.final, s.homework);
}