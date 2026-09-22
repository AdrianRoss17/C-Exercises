#ifndef GUARD_misc_h
#define GUARD_misc_h

#include <vector>
#include <string>

void readAndCalcWords(std::vector<std::string>& words);
std::vector<std::string> split(const std::string& s);
std::map<std::string, std::vector<int> > xref(std::istream& in, std::vector<std::string> find_words(const std::string&) = split);

#endif