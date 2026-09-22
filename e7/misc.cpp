#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include "misc.h"

using std::vector; using std::string; using std::cout; using std::to_string; using std::endl; using std::copy;
using std::map; using std::istream;

bool space(char c)
{
	return isspace(c);
}

bool not_space(char c)
{
	return !isspace(c);
}

vector<string> split(const string& s)
{
	vector<string> ret;
	typedef string::const_iterator iter;

	iter i = s.begin();

	while (i != s.end()) {

		i = find_if(i, s.end(), not_space);

		iter j = find_if(i, s.end(), space);

		if (i != s.end())
			ret.push_back(string(i, j));

		i = j;
	}
	return ret;
}

bool not_url_char(char c)
{
	static const string url_ch = "`;/?:@=&$-_.+!*'((),";

	return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) != url_ch.end());
}

string::const_iterator url_beg(string::const_iterator b, string::const_iterator e)
{
	static const string sep = "://";

	typedef string::const_iterator iter;

	iter i = b;

	while ((i = search(i, e, sep.begin(), sep.end())) != e) {

		if (i != b && i + sep.size() != e) {

			iter beg = i;
			while (beg != b && isalpha(beg[-1]))
				--beg;

			if (beg != i && !not_url_char(i[sep.size()]))
				return beg;
		}

		i += sep.size();
	}

	return e;
}

string::const_iterator url_end(string::const_iterator b, string::const_iterator e)
{
	return find_if(b, e, not_url_char);
}

vector<string> find_urls(const string& s)
{
	vector<string> ret;
	typedef string::const_iterator iter;
	iter b = s.begin(), e = s.end();

	while (b != e) {

		b = url_beg(b, e);

		if (b != e) {
			iter after = url_end(b, e);

			ret.push_back(string(b, after));

			b = after;
		}
	}
	return ret;
}

map<string, vector<int> > xref(istream& in, vector<string> find_words(const string&) = split)
{
	string line;
	int line_number = 0;
	map<string, vector<int> > ret;

	while (getline(in, line)) {
		++line_number;

		vector<string> words = find_words(line);

		for (vector<string>::const_iterator it = words.begin(); it != words.end(); ++it)
			ret[*it].push_back(line_number);
	}

	return ret;
	23w
}