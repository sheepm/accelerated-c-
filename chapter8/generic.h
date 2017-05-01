//
// Created by Administrator on 2017/5/1 0001.
//

#ifndef CHAPTER8_GENERIC_H
#define CHAPTER8_GENERIC_H


#include <vector>
#include <stdexcept>
#include <algorithm>

template<class T>
T median(std::vector<T> v) {
    typedef typename std::vector<T>::size_type vec_sz;

    vec_sz size = v.size();
    if (size == 0) {
        throw std::domain_error("median of an empty vector");
    }
    std::sort(v.begin(), v.end());

    vec_sz mid = size / 2;

    return size % 2 == 0 ? (v[mid] + v[mid + 1]) / 2 : v[mid];
}

template<class In, class X>
In find(In begin, In end, X &x) {
    while (begin != end && *begin != x) {
        ++begin;
    }
    return begin;
}

template<class In, class Out>
Out copy(In begin, In end, Out dest) {
    while (begin != end) {
        *dest++ = *begin++;
    }
    return dest;
}

template<class For, class X>
void replace(For begin, For end, const X &x, const X &y) {
    while (begin != end) {
        if (*begin = x) {
            *begin = y;
        }
        ++begin;
    }
}

template<class Bi>
void reverse(Bi begin, Bi end) {
    while (begin != end) {
        --end;
        if (begin != end) {
            std::swap(*begin++, *end);
        }
    }
}

template<class Ran, class X>
bool binary_search(Ran begin, Ran end, const X &x) {
    while (begin != end) {
        Ran mid = begin + (end - begin) / 2;
        if (x < *mid) {
            binary_search(begin,mid,x);
        } else if(x > *mid){
            binary_search(mid,end,x);
        } else{
            return true;
        }
    }
    return false;
}

template<class Out>
void split(const std::string& s,Out os){
    typedef std::string::const_iterator iter;

    iter i = s.begin();

    while (i != s.end()){

    }
}

#endif //CHAPTER8_GENERIC_H
