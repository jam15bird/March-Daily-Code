#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int input = 0;
	int num;
	int sum = 0;
	for (int i = 0; i < 100; i++) {
		num = rand() % 1001;
		cout << num << endl;
		sum = sum + num;

		if (num > input)
			input = num;

	}
	cout << "The biggest is " << input << endl << endl << endl;
	cout << "Your average is" << sum/100 << endl << endl << endl;

}