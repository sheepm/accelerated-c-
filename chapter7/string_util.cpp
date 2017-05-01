//
// Created by Administrator on 2017/4/30 0030.
//
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

vector<string> split(const string &s) {
    vector<string> ret;
    typedef vector<string>::size_type string_size;

    string_size i = 0;

    while (i != s.size()) {
        while (i != s.size() && isspace(s[i])) {
            i++;
        }
        string_size j = i;
        while (j != s.size() && !isspace(s[j])) {
            j++;
        }
        if (i != j) {
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }
    return ret;
}

string::size_type width(const vector<string> &v) {
    string::size_type maxlen = 0;
    for (vector<string>::size_type i = 0; i != v.size(); i++) {
        maxlen = max(maxlen, v[i].size());
    }
    return maxlen;
}

vector<string> frame(const vector<string> &v) {
    vector<string> ref;

    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');

    //输出顶框
    ref.push_back(border);

    for (vector<string>::size_type i = 0; i != v.size(); i++) {
        ref.push_back("*" + v[i] + string(maxlen - v[i].size(), ' ') + "*");
    }
    ref.push_back(border);
    return ref;
}

bool bracketed(const string& s){
    return s.size() > 1 && s[0] == '<' && s[s.size() -1] == '>';
}

int nrand(int n){
    if (n < 0 || n > RAND_MAX){
        throw domain_error("Argument is out of range");
    }
    const int bucket_size = RAND_MAX / n;

    int r;
    do{
        r = rand() / bucket_size;
    }while (r >= n);

    return r;
}















