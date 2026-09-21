#ifndef GUARD_misc_h
#define GUARD_misc_h

#include <vector>
#include <string>

void readAndCalcWords(std::vector<std::string>& words);
std::vector<std::string> split(const std::string& s);
std::string::size_type width(const std::vector<std::string>& v);
std::vector<std::string> frame(const std::vector<std::string>& v);
std::vector<std::string> vcat(const std::vector<std::string>& top, const std::vector<std::string>& bottom);
std::vector<std::string> hcat(const std::vector<std::string>& left, const std::vector<std::string>& vector);
std::vector<std::string> find_urls(const std::string& s);

#endif