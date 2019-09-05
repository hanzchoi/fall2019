// Find the value
// Write a program to find and print the first perfect square (i*i) whose last two digits
// are both odd.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// There is no solution apparently and I need to show why
	// the program is not working by proof
	for(int i = 0; i <= 100; i++){
		if(sqrt(i*i) == i){
			int lastTwo = (i*i) % 100;
			cout << i*i << " " << lastTwo << endl;
		}
	}

	cout << "I guess there is no number between them";
	return 0;
}
