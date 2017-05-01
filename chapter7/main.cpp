#include <iostream>
#include <map>

using namespace std;

int main() {
    string s;
    map<string, int> counters;

    while (cin >> s) {
        ++counters[s];
        if (s == "exit"){
            break;
        }
    }

    for (map<string, int>::const_iterator it = counters.begin(); it != counters.end(); it++) {
        cout << it->first << it->second << endl;
    }

    return 0;
}