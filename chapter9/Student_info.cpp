//
// Created by Administrator on 2017/5/1 0001.
//

#include "Student_info.h"


double Student_info::grade() const {
    return ::isalnum('c');
}

std::istream &Student_info::read(std::istream &in) {
    in >> n;
    return in;
}

Student_info::Student_info(std::istream &) {

}

Student_info::Student_info() : midterm(0), final(0) {

}


bool compare(const Student_info &x, const Student_info &y) {
    return x.name() < y.name();
}

