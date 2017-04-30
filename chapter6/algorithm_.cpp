//
// Created by Administrator on 2017/4/30 0030.
//

#include <cctype>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool space(char c) {
    return isspace(c);
}

bool not_space(char c) {
    return !isspace(c);
}

vector<string> split(const string &str) {
    typedef string::const_iterator iter;

    vector<string> ret;

    iter i = str.begin();

    while (i != str.end()) {
        i = find_if(i, str.end(), not_space);
        iter j = find_if(i, str.end(), space);
        if (i != str.end()) {
            ret.push_back(string(i, j));
        }
        i = j;
    }
    return ret;
}

bool is_palindrome(const string &str) {
    return equal(str.begin(), str.end(), str.rbegin());
}

bool not_url_char(char c) {
    static const string url_ch = "~;/?:@=&$-_.+!*'(),'";
    return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) != url_ch.end());
}

string::const_iterator url_beg(string::const_iterator b, string::const_iterator e) {
    static const string sep = "://";

    typedef string::const_iterator iter;

    iter i = b;
    while ((i = search(i, e, sep.begin(), sep.end())) != e) {
        if (i != b && i + sep.size() != e) {
            iter beg = i;
            while (beg != e && isalpha(beg[-1])) {
                --beg;
            }
            if (beg != i && i + sep.size() != e
                && !not_url_char(i[sep.size()])) {
                return beg;
            }
        }
        if (i != e) {
            i += sep.size();
        }
    }
    return e;
}

string::const_iterator url_end(string::const_iterator b, string::const_iterator e) {
    return find_if(b, e, not_url_char);
}

vector<string> find_urls(const string &str) {
    vector<string> ret;
    typedef string::const_iterator iter;

    iter b = str.begin(), e = str.end();

    //检查整个输入
    while (b != e) {
        //查找一个或紧跟着多个://的字母
        b = url_beg(b, e);
        //如果查找成功
        if (b != e){
            iter after = url_end(b,e);

            ret.push_back(string(b,after));
            b = after;
        }
    }
    return ret;
}

