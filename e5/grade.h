#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include <list>
#include "Student_info.h"

bool fgrade(const Student_info& s);
double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

double gradeList(double, double, const std::list<double>& hw);


#endif