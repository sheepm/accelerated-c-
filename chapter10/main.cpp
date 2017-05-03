#include <iostream>
#include <vector>
#include <fstream>
#include "grade.h"

using namespace std;

int main() {

    string file;
    ifstream infile(file.c_str());
    ofstream outfile("out");

    string s;

    while (getline(infile, s)) {
        outfile << s << endl;
    }

    int *i = new int(42);
    ++*i;
    delete i;

    int *z = new int[0];
    vector<int> vec(z,z + 0);
    delete[] z;

    int x = 5;

    int *p = &x;
    cout << "x=" << x << endl;

    *p = 6;
    cout << "p= " << p << endl;
    cout << "*p= " << *p << endl;
    cout << "&p= " << &p << endl;
    cout << "x= " << x << endl;

    const size_t NDim = 3;
    double coords[NDim];
    *coords = 1.5;
    vector<double> v;
    copy(coords, coords + NDim, back_inserter(v));

    const int month_lengths[] = {
            30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    cout << letter_grade(91);

    return 0;
}