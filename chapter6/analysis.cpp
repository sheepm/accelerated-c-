//
// Created by Administrator on 2017/4/30 0030.
//

#include <algorithm>
#include "student_info.h"
#include "median.h"
#include "grade.h"

using namespace std;


double median_analysis(const vector<Student_info> &students) {
    vector<double> grades;

    transform(students.begin(), students.end(), back_inserter(grades), grade_aux);
    return median(grades);
}

double average(const vector<double>& v){
    return accumulate(v.begin(),v.end(),0.0) / v.size();
}

double average_analysis(const Student_info& s){
    return grade(s.midterm,s.final,average(s.homework));
}

double optimistic_median(const Student_info& s){
    vector<double> nonzero;
    //remove_copy_if  跳过满足条件的  不复制
    remove_copy(s.homework.begin(),s.homework.end(),back_inserter(nonzero),0);

    if (nonzero.empty()){
        return grade(s.midterm,s.final,0);
    } else{
        return grade(s.midterm,s.final,median(s.homework));
    }
}

vector<Student_info> extract_fails(vector<Student_info>& v){
    vector<Student_info>::iterator iter = stable_partition(v.begin(),v.end(),fgrade);
    vector<Student_info> fail(iter,v.end());
    v.erase(iter,v.end());
    return fail;
}

