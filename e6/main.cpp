#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "misc.h"

using std::cin;				using std::setprecision;
using std::cout;			using std::sort;
using std::domain_error;	using std::streamsize;
using std::endl;			using std::string;
using std::max;				using std::vector;
using std::to_string;		using std::getline;

int main()
{
	//int i = 0;
	//while (i < 1000)
	//{
	//	cout << "john 61 61 61" << endl;
	//	i++;
	//}
	//int j = 0;
	//while (j < 2000)
	//{
	//	cout << "lorens 59 59 59" << endl;
	//	j++;
	//}
	//int k = 0;
	//while (k < 1000)
	//{
	//	cout << "zaner 61 61 61" << endl;
	//	k++;
	//}
	//int l = 0;
	//while (l < 1000)
	//{
	//	cout << "aiden 45 62 23" << endl;
	//	l++;
	//}
	//int a = 0;
	//while (a < 2000)
	//{
	//	cout << "aiden 100 100 100" << endl;
	//	a++;
	//}
	/*vector<Student_info> students;
	vector<Student_info> studentsFinal;
	Student_info record;
	string::size_type maxlen = 0;

	while (read(cin, record))
	{
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
	}

	sort(students.begin(), students.end(), compare);

	vector<Student_info> passingStudents = extract_fails(students);

	for (vector<Student_info>::size_type i = 0;
		i != students.size(); ++i)
	{
		cout << students[i].name
			<< string(maxlen + 1 - students[i].name.size(), ' ');

		try
		{
			double final_grade = grade(students[i]);

			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade
				<< setprecision(prec);
		}
		catch (domain_error e)
		{
			cout << e.what();
		}

		cout << endl;
	}*/

	// NEW EXERCISE

	/*string s;

	while (getline(cin, s)) {

		vector<string> v = split(s);

		for (vector<string>::size_type i = 0; i != v.size(); ++i)
			cout << v[i] << endl;
	}*/

	// NEW EXERCISE
	//string s;
	//vector<string> stringVec;

	//while (getline(cin, s)) {
	//	stringVec = split(s);
	//}

	//for (vector<string>::size_type i = 0; i != stringVec.size() + 2; ++i) {
	//	cout << frame(stringVec)[i] << endl;
	//}

	// NEW EXERCISE
	//string s;
	//vector<string> stringVec;

	//while (getline(cin, s)) {
	//	stringVec = split(s);
	//}

	//for (vector<string>::size_type i = 0; i != stringVec.size() * 2 + 2; ++i) {
	//	cout << vcat(stringVec, frame(stringVec))[i] << endl;
	//}

	//NEW EXERCISE
	/*string s;
	vector<string> stringVec;

	while (getline(cin, s)) {
		stringVec = split(s);
	}

	for (vector<string>::size_type i = 0; i != stringVec.size() + 2; ++i) {
		cout << hcat(stringVec, frame(stringVec))[i] << endl;
	}

	return 0;*/

	//NEW EXERCISE
	/*string s;

	cin >> s;

	vector<string> urlvec = find_urls(s);

	for (vector<string>::const_iterator i = urlvec.begin(); i != urlvec.end(); i++) {
		cout << *i << endl;
	}*/

	//NEW EXERCISE
	//vector<int> u(10, 100);
	//vector<int> v;
	//copy(u.begin(), u.end(), v.begin());

	//for (vector<int>::const_iterator i = v.begin(); i != v.end(); i++) {
	//	cout << *i << endl;
	//}

}