#include <iostream>
#include <string>

using std::cout;	using std::cin;
using std::endl;	using std::string;

int main() {
	cout << "What is your name my G? ";

	string name;
	cin >> name;

	cout << "My G, how many spaces do you want to see in b/w your greeting? ";
	
	int spaces;
	cin >> spaces;

	const string greeting = "Hello, " + name + "!";

	const int pad = 1;

	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;

	cout << endl;

	for (int r = 0; r != rows; r++) {

		string::size_type c = 0;
		while (c != cols) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
					cout << "*";
				}
				else {
					string spaceLength(10, " ");
					cout << (10," ");
					c += 10;
				}
				c++;
			}
		}
		cout << endl;
	}
	return 0;
}	