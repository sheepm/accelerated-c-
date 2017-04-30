//
// Created by Administrator on 2017/4/30 0030.
//

#ifndef CHAPTER6_GRADE_H
#define CHAPTER6_GRADE_H

#include "student_info.h"

bool did_all_hw(const Student_info&);

double grade(double, double, double);

double grade(double, double, const std::vector<double> &);

double grade(const Student_info &);

double grade_aux(const Student_info&);

bool fgrade(const Student_info &);

#endif //CHAPTER6_GRADE_H
