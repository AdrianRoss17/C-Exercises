#ifndef GUARD_misc_h
#define GUARD_misc_h

#include <vector>
#include <string>

void readAndCalcWords(std::vector<std::string>& words);
std::vector<std::string> split(const std::string& s);
std::map<std::string, std::vector<int> > xref(std::istream& in, std::vector<std::string> find_words(const std::string&) = split);

typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string, Rule_collection> Grammar;

Grammar read_grammar(std::istream& in);
std::vector<std::string> gen_sentence(const Grammar& g);
bool bracketed(const std::string& s);
void gen_aux(const Grammar& g, const std::string& word, std::vector<std::string>& ret);
int nrand(int n);

#endif