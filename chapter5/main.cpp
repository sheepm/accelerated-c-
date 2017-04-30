#include <iostream>
#include <algorithm>
#include <iomanip>
#include <list>
#include "student_info.h"
#include "grade.h"
#include "string_util.h"


using namespace std;

int main() {
//    list <Student_info> students;
//    Student_info record;
//    string::size_type maxlen = 0;
//
//    while (read(cin, record)) {
//        maxlen = max(maxlen, record.name.length());
//        students.push_back(record);
//    }
//    students.sort(compare);
//
//    list<Student_info>::const_iterator iter = students.begin();
//
//    for (; iter != students.end(); iter++) {
//        cout << setw(maxlen + 1) << iter->name;
//
//        try {
//            double final_grade = grade(*iter);
//            streamsize prec = cout.precision();
//            cout << setprecision(3) << final_grade << setprecision(prec);
//        } catch (domain_error e) {
//            cout << e.what();
//        }
//        cout << endl;
//    }

    string s;
    while (getline(cin, s)) {
        vector<string> v = split(s);
        for (vector<string>::size_type i = 0; i != v.size(); ++i) {
            cout << v[i] << endl;
        }
        break;
    }
    return 0;
}









