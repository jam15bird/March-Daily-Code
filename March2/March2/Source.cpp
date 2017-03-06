#include <iostream>
#include<Windows.h>
using namespace std;
void order( int input);//declaration
int main() {
	int input;
	cout << "how many orders do you want?" << endl;
	cin >> input;
	order(input);


}
void order ( int input) {
	for(int i=0;i<input;i++)
		PlaySound(TEXT("TheGreat.mp3"), NULL, SND_FILENAME);
}