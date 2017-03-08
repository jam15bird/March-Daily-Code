#include <iostream>
#include<string>
using namespace std;
int main() {
	

	char input;
	int score = 0;

	cout << "Press B my good sir" << endl << endl << endl << endl;
	cin >> input;

	while (input == 'b') {
		
		score = score + 1;
		cin >> input;
	}
	cout << score << endl << endl;



}