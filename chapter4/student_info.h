//
// Created by Administrator on 2017/4/30 0030.
//

#ifndef CHAPTER4_STUDENT_INFO_H
#define CHAPTER4_STUDENT_INFO_H

#include <string>
#include <vector>
#include <istream>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info &, const Student_info &);

std::istream &read(std::istream &, Student_info &);

std::istream &read_hw(std::istream& , std::vector<double> &);

#endif //CHAPTER4_STUDENT_INFO_H
