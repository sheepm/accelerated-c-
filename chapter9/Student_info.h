//
// Created by Administrator on 2017/5/1 0001.
//

#ifndef CHAPTER9_STUDENT_INFO_H
#define CHAPTER9_STUDENT_INFO_H

#include <string>
#include <vector>

class Student_info {
private:
    std::string n;
    double midterm, final;
    std::vector<double> homework;
public:
    Student_info();

    Student_info(std::istream&);
    std::istream &read(std::istream &);

    double grade() const;

    std::string name() const { return n;};

    bool valid() const { return !homework.empty();};
};

bool compare(const Student_info&, const Student_info&);

#endif //CHAPTER9_STUDENT_INFO_H
