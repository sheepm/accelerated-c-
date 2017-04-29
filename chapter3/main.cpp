#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "Please enter your first name :" << endl;
    string name;
    cin >> name;
    cout << "Hello, " + name << endl;
    cout << "Please enter your midterm and  final exam grades " << endl;
    double midterm, final;
    cin >> midterm >> final;
    cout << "Enter your homework grades " << endl;

    vector<double> homework;
    double x;

    while (cin >> x) {
        homework.push_back(x);
    }

    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size == 0) {
        cout << "you must enter your grades" << endl;
        return 1;
    }
    sort(homework.begin(), homework.end());
    vec_sz mid = size / 2;
    double median;
    median = (size % 2 == 0 ? (homework[mid] + homework[mid + 1]) / 2 : homework[mid]);
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * median
                                                      << setprecision(prec) << endl;
    return 0;
}