#include <iostream>
#include <algorithm>
#include <iomanip>
#include "Student_info.h"

using namespace std;

int main() {
    vector<Student_info> students;
    Student_info record;

    string::size_type maxlen = 0;

    while (record.read(cin)) {
        maxlen = max(maxlen, record.name().size());
        students.push_back(record);
    }
    sort(students.begin(), students.end(), compare);

    for (vector<Student_info>::size_type i = 0; i != students.size(); i++) {
        cout << setw(maxlen + 1) << students[i].name();
    }
    return 0;
}