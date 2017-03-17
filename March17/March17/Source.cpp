#include <iostream>
#include <string>
using namespace std;
int main() {
	string Pasta[4];
	for (int i = 0; i < 4;i++) {

		cout << "give me a word" << endl << endl << endl;
		getline(cin, Pasta[i]);


	}
	if (Pasta[3].compare(" shamrock")==0)
		cout << "YOU HAVE A POT OF GOLD MY GOOD FRIEND" << endl << endl << endl;
	else
		cout << "Go away you loser." << endl << endl << endl;


}