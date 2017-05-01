//
// Created by Administrator on 2017/5/1 0001.
//

#ifndef CHAPTER7_GRAMMAR_H
#define CHAPTER7_GRAMMAR_H

#include <vector>
#include <string>
#include <map>

typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string, Rule_collection> Grammar;

Grammar read_grammar(std::istream&);

void gen_aux(const Grammar&, const std::string&,std::vector<std::string>&);


#endif //CHAPTER7_GRAMMAR_H
