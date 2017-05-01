//
// Created by Administrator on 2017/5/1 0001.
//

#include "grammar.h"
#include "string_util.h"

using namespace std;

Grammar read_grammar(istream &in) {
    Grammar ret;

    string line;

    while (getline(in, line)) {
        vector<string> entry = split(line);

        if (!entry.empty()) {
            ret[entry[0]].push_back(Rule(entry.begin() + 1, entry.end()));
        }
    }
    return ret;
}

void gen_aux(const Grammar &g, const string& s, vector<string> &v) {
    if (!bracketed(s)) {
        v.push_back(s);
    } else {
        Grammar::const_iterator iter = g.find(s);
        if (iter == g.end()) {
            throw logic_error("empty rule");
        }
        const Rule_collection &c = iter->second;
        const Rule &r = c[nrand(c.size())];

        for (Rule::const_iterator i = r.begin(); i != r.end(); i++) {
            gen_aux(g, *i, v);
        }
    }

}














