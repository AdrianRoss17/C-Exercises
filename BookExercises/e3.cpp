#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;		using std::endl;
using std::cout;	using std::setprecision;
using std::string;	using std::streamsize;
using std::vector;
//
//int main()
//{
//	cout << "Please enter your first name: ";
//	string name;
//	cin >> name;
//
//	cout << "Hello ," << name << "!" << endl;
//
//	cout << "Please enter you midterm and finals grades: ";
//
//	double midterm, final;
//	cin >> midterm >> final;
//
//	cout << "Enter all of your homework grades, "
//		"followed by the end-of-file command: ";
//
//	int count = 0;
//	double sum = 0;
//
//	double x;
//	vector<double> hw;
//	
//	while (cin >> x)
//		hw.push_back(x);
//
//	typedef vector<double>::size_type vec_sz;
//	vec_sz size = hw.size();
//
//	if (size == 0)
//	{
//		cout << endl << "You must enter your grades. "
//			"Please try again." << endl;
//
//		return 1;
//	}
//
//	sort(hw.begin(), hw.end());
//
//	vec_sz mid = size / 2;
//	double median;
//	median = size % 2 == 0 ? (hw[mid] + hw[mid - 1]) / 2 : hw[mid];
//
//	streamsize prec = cout.precision();
//
//	cout << "Your final grade is " << setprecision(3)
//		<< 0.2 * midterm + 0.4 * final * median
//		<< setprecision(prec) << endl;
//
//	return 0;
//}

//int main() {
//	cout << "Please enter students names: ";
//
//	string students;
//	vector<string> studentsVector;
//
//	while (cin >> students)
//	{
//		studentsVector.push_back(students);
//	}
//
//	cout << "Please enter homework grades for " << studentsVector.size() << " students (3 per): ";
//
//	double hw;
//	vector<double> homeWorkVector;
//
//	while (cin >> hw)
//	{
//		homeWorkVector.push_back(hw);
//	}
//
//	double studentsHomeworkSections = homeWorkVector.size() / 3;
//	vector<double> homeWorkStudentsVectorAverage;
//
//	for (int i = 0; i < studentsHomeworkSections; i++)
//	{
//		double hwSum = 0;
//		for (int j = i * 3; j < (i+1) * 3; j++)
//		{
//			hwSum += homeWorkVector[j];
//		}
//		homeWorkStudentsVectorAverage.push_back(hwSum / 3);
//	}
//
//	cout << "Please enter their final grade (should be the same number as students): ";
//
//	double final;
//	vector<double> finalVector;
//
//	while (cin >> final)
//	{
//		finalVector.push_back(final);
//	}
//
//	cout << "The final grades are: ";
//
//	for (int i = 0; i < studentsVector.size(); i++)
//	{
//		cout << studentsVector[i] << " final:" << finalVector[i] << " hws:" << homeWorkStudentsVectorAverage[i] << endl;
//	}
//}