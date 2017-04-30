//
// Created by Administrator on 2017/4/30 0030.
//


#include <vector>
#include <string>
#include "string_util.h"

using namespace std;

vector<string> vcat(const vector<string> &top, const vector<string> &bottom) {
    vector<string> ret = top;

    ret.insert(top.end(), bottom.begin(), bottom.end());
    return ret;
}

vector<string> hcat(const vector<string> &left, const vector<string> &right) {
    vector<string> ret;
    string::size_type width1 = width(left);
    vector::size_type i = 0, j = 0;

    while (i != left.size() || j != right.size()) {
        string s;
        if (i != left.size()) {
            s = left[i++];
        }
        s = s + string(width1 - s.size(), ' ');
        if (j != right.size()) {
            s = s + right[j++];
        }
        ret.push_back(s);
    }
    return ret;
}