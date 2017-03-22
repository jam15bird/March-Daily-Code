#include<iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;
int length;
int pitch;
void RandomBeep();
int main() {
	srand(time(NULL));
	while(1)
 RandomBeep();
}
void RandomBeep() {

	pitch = rand() % 1001;
	length = rand() % 1001;
	Beep(pitch, length);
}