#include <iostream>
using namespace std;
int main() {
	int input;
	bool prime = true;
	cout << "Pick a number good sir" << endl;
	cin >> input;
	while (1) {
		prime = true;
		input++;
		for (int i = 2;i < input;i++)
			if (input%i == 0)
		prime = false;

		if (prime) {
			cout << input << "is your prime number" << endl;
			return 0;
		}
	}
}