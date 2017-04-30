//
// Created by Administrator on 2017/4/30 0030.
//

#ifndef CHAPTER4_GRADE_H
#define CHAPTER4_GRADE_H

#include <vector>
#include "student_info.h"

double grade(double, double, double);

double grade(double, double, const std::vector<double> &);

double grade(const Student_info &);

bool fgrade(const Student_info &);

#endif //CHAPTER4_GRADE_H
