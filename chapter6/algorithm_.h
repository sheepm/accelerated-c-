//
// Created by Administrator on 2017/4/30 0030.
//

#ifndef CHAPTER6_ALGORITHM_H
#define CHAPTER6_ALGORITHM_H

#include <vector>
#include <string>

bool space(char);

bool not_space(char);

std::vector<std::string> split(const std::string &);

bool is_palindrome(const std::string &);

bool not_url_char(char);

std::vector<std::string> find_urls(const std::string &);

std::string::const_iterator url_beg(std::string::const_iterator, std::string::const_iterator);

std::string::const_iterator url_end(std::string::const_iterator, std::string::const_iterator);

#endif //CHAPTER6_ALGORITHM_H
