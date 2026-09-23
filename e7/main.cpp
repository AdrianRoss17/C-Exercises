#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <istream>
#include "misc.h"

using std::string;  using std::map;		using std::cin; using std::endl; using std::cout;
using std::vector;  using std::istream;

int main()
{
	/*string s;
	map<string, int> counters;

	while (cin >> s)
		++counters[s];

	for (map<string, int>::const_iterator it = counters.begin(); it != counters.end(); ++it) {
		cout << it->first << "\t" << it->second << endl;
	}*/

	//NEW EXERCISE
	/*map<string, vector<int> > ret = xref(cin);

	for (map<string, vector<int> >::const_iterator it = ret.begin(); it != ret.end(); ++it) {
		cout << it->first << " occurs on line(s): ";

		vector<int>::const_iterator line_it = it->second.begin();
		cout << *line_it;
		
		++line_it;

		while (line_it != it->second.end()) {
			cout << ", " << *line_it;
			++line_it;
		}

		cout << endl;
	}*/

	//NEW EXERCISE
	vector<string> sentence = gen_sentence(read_grammar(cin));

	vector<string>::const_iterator it = sentence.begin();
	if (!sentence.empty()) {
		cout << *it;
		++it;
	}

	while (it != sentence.end()) {
		cout << " " << *it;
		++it;
	}

	cout << endl;

	return 0;
}