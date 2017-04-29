#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "student_info.h"
#include "grade.h"


using namespace std;

int main() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    while (read(cin,record)){
        maxlen = max(maxlen,record.name.length());
        students.push_back(record);
    }

    sort(students.begin(),students.end(),compare);
    for (vector<Student_info>::size_type i = 0 ; i != students.size() ; i++){
        cout << setw(maxlen + 1) << students[i].name;

        try{
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout<< setprecision(3) << final_grade << setprecision(prec);
        }catch (domain_error e){
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}









