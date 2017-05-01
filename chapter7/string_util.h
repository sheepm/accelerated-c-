//
// Created by Administrator on 2017/4/30 0030.
//

#ifndef CHAPTER5_SPLIT_H
#define CHAPTER5_SPLIT_H

#include <vector>
#include <iostream>

std::vector<std::string> split(const std::string &);

std::string::size_type width(const std::vector<std::string> &);

std::vector<std::string> frame(const std::vector<std::string> &);

bool bracketed(const std::string&);

int nrand(int n);

#endif //CHAPTER5_SPLIT_H
