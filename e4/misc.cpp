#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include "misc.h"

using std::vector; using std::string; using std::cout; using std::to_string; using std::endl;

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