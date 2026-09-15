#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "student_info.h"
#include "misc.h"

using std::cin;				using std::setprecision;
using std::cout;			using std::sort;
using std::domain_error;	using std::streamsize;
using std::endl;			using std::string;
using std::max;				using std::vector;
using std::to_string;

int main()
{
	//new exer
	/*vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;

	while (read(cin, record))
	{
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
	}

	sort(students.begin(), students.end(), compare);

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

	//new exer
	//vector<double> integersVector;
	//double integer;
	//string::size_type maxlen = 0;

	//while (cin >> integer)
	//{
	//	maxlen = max(maxlen, to_string(integer).size());
	//	integersVector.push_back(integer);
	//}

	//double largestIntegerContainer = maxlen + 2;

	//for (double i = 0; i < integersVector.size(); ++i)
	//{
	//	size_t currentIntSize = std::to_string(integersVector[i]).size();
	//	size_t currentIntSizeSquare = std::to_string(integersVector[i] * integersVector[i]).size();
	//	double currentInt = integersVector[i];
	//	cout << currentInt << std::setw(largestIntegerContainer - currentIntSize + currentIntSizeSquare) << currentInt * currentInt << endl;
	//}

	//new exer
	//vector<string> wordsEntered;
	//string actualWords;

	//while (cin >> actualWords)
	//{
	//	wordsEntered.push_back(actualWords);
	//}


	//readAndCalcWords(wordsEntered);

	//new exer
	/*vector<double> v;
	double x;

	while (cin >> x)
	{
		v.push_back(x);
	}

	double count = 0;

	for (int i = 0; i < v.size(); ++i)
	{
		count += v[i];
	}

	cout << count / v.size();*/

	return 0;
}

