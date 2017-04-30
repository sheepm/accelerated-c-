//
// Created by Administrator on 2017/4/30 0030.
//

#include <algorithm>
#include <stdexcept>
#include "student_info.h"
#include "median.h"

using namespace std;

bool did_all_hw(const Student_info &s) {
    return find(s.homework.begin(), s.homework.end(), 0) == s.homework.end();
}

double grade(double midterm, double final, double homework) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double> &hw) {
    if (hw.size() == 0) {
        throw domain_error("student have no homework");
    }
    return grade(midterm, final, median(hw));
}

double grade(const Student_info &s) {
    return grade(s.midterm, s.final, s.homework);
}

double grade_aux(const Student_info &s) {
    try {
        return grade(s);
    } catch (domain_error){
        return grade(s.midterm, s.final, 0);
    }
}

bool fgrade(const Student_info &s){
    return grade(s) < 60;
}