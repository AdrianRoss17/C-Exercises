#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include "misc.h"

using std::vector; using std::string; using std::cout; using std::to_string; using std::endl; using std::copy;

void readAndCalcWords(vector<string>& words)
{
	cout << words.size() << endl;

	vector<string> distinctWords;
	vector<string> display;

	int exists = false;
	int existsWordCount = 0;

	for (int i = 0; i < words.size(); ++i)
	{
		for (int j = 0; j < words.size(); ++j)
		{
			if (words[i] == words[j])
			{
				++existsWordCount;
			}
		}
		for (int j = 0; j < distinctWords.size(); ++j)
		{
			if (words[i] == distinctWords[j])
			{
				exists = true;
			}
		}

		if (exists == false)
		{
			string con = words[i] + " " + to_string(existsWordCount);
			distinctWords.push_back(words[i]);
			display.push_back(con);
		}
		existsWordCount = 0;
		exists = false;
	}


	for (int j = 0; j < distinctWords.size(); ++j)
	{
		cout << display[j] << endl;
	}

}

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

string::size_type width(const vector<string>& v)
{
	string::size_type maxlen = 0;
	for (vector<string>::size_type i = 0; i != v.size(); ++i)
		maxlen = std::max(maxlen, v[i].size());
	return maxlen;
}

vector<string> frame(const vector<string>& v)
{
	vector<string> ret;
	string::size_type maxlen = width(v);
	string border(maxlen + 4, '*');

	ret.push_back(border);

	for (vector<string>::const_iterator i = v.begin(); i != v.end(); ++i) {
		ret.push_back("* " + *i +
			string(maxlen - i->size(), ' ') + " *");
	}

	ret.push_back(border);
	return ret;
}

vector<string> vcat(const vector<string>& top, const vector<string>& bottom)
{
	vector<string> ret = top;

	//ret.insert(ret.end(), bottom.begin(), bottom.end());
	copy(bottom.begin(), bottom.end(), back_inserter(ret));

	return ret;
}

//vector<string> hcat(const vector<string>& left, const vector<string>& right)
//{
//	vector<string> ret;
//
//	string::size_type width1 = width(left) + 1;
//
//	vector<string>::size_type i = 0, j = 0;
//
//	while (i != left.size() || j != right.size()) {
//		string s;
//
//		if (i != left.size())
//			s = left[i++];
//
//		s += string(width1 - s.size(), ' ');
//
//		if (j != right.size())
//			s += right[j++];
//
//		ret.push_back(s);
//	}
//
//	return ret;
//}

vector<string> hcat(const vector<string>& left, const vector<string>& right)
{
	vector<string> ret;

	string::size_type width1 = width(left) + 1;

	vector<string>::const_iterator i = left.begin(), j = right.begin();

	while (i != left.end() || j != right.end()) {
		string s;

		if (i != left.end())
			s = *i++;

		s += string(width1 - s.size(), ' ');

		if (j != right.end())
			s += *j++;

		ret.push_back(s);
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
