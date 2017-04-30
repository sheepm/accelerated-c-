//
// Created by Administrator on 2017/4/30 0030.
//

#ifndef CHAPTER6_ANALYSIS_H
#define CHAPTER6_ANALYSIS_H


#include <vector>
#include "student_info.h"

double median_analysis(const std::vector<Student_info> &);

double average(const std::vector<double>&);

double average_analysis(const Student_info&);

double optimistic_median(const Student_info&);

std::vector<Student_info> extract_fails(std::vector<Student_info>&);

#endif //CHAPTER6_ANALYSIS_H
