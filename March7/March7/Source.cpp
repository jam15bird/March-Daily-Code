#include <iostream>
using namespace std;
int main() {
	int input;
	int input2;
	int sum = 0;
	cout << "What would you like your first number to be good sir?" << endl << endl;
	cin >> input;
	cout << "What would you like your second number to be good sir?" << endl << endl;
	cin >> input2;
	for (int i = 0; i < input; i++)
		sum = sum + input2;

	cout << sum;
}	