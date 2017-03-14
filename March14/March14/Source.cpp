#include <iostream>
using namespace std;
int main() {
	int input = 0;
	int num;
	for (int i = 0; i < 3; i++) {
		cout << "Pick a positive number my friend" << endl << endl << endl;
		cin >> num;
			if (num > input)
				input = num;

	}
	cout << "The biggest is " << input << endl << endl << endl;
}