#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include "misc.h"

using std::vector; using std::string; using std::cout; using std::to_string;

vector<string> readAndCalcWords(vector<string>& words)
{
	cout << words.size();

	vector<string> distinctWords;

	int exists = 0;
	int existsWordCount;

	if (distinctWords.size() == 0)
	{
		distinctWords.push_back(words[0]);
	}
	else {
		for (int i = 0; i < words.size(); ++i)
		{
			for (int j = 0; j < words.size(); ++j)
			{
				if (words[i] == words[j])
				{
					++existsWordCount;
				}
			}
			distinctWords.push_back(words[i] + to_string(existsWordCount));
		}
	}

	for (int j = 0; j < distinctWords.size(); ++j)
	{
		cout << distinctWords[j];
	}
}