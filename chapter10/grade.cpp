//
// Created by Administrator on 2017/5/3 0003.
//

#include <cstring>
#include "grade.h"

using namespace std;

string letter_grade(double grade) {
    static const double numbers[] = {
            97, 94, 90, 87, 84, 80, 77, 74, 70, 60, 0
    };

    static const char *const letters[] = {
            "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D", "F"
    };
    //数组内存总大小/数组单元素内存大小 = 数组个数
    static const size_t ngrades = sizeof(numbers) / sizeof(*numbers);

    for (size_t i = 0; i < ngrades; ++i) {
        if (grade >= numbers[i]) {
            return letters[i];
        }
    }

    return "?\?\?";
}

char *duplicate_chars(const char *p) {
    size_t length = strlen(p) + 1;
    char *result = new char[length];
    copy(p, p + length, result);
    return result;
}
