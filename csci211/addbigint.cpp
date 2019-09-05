//Adding Big Integers
//

#include <iostream>
using namespace std;

//test out a small number with this function
// have a temp variable and if it goes over then add it to it later

string add(string a, string b){
	int temp = 0;
	string sum = "";
	int i = a.length() - 1;
	int j = b.length() - 1;

	if(i >= 101 && j >= 101){
		cout << "Your number is too big!" << endl;
		return 0;
	}else{

	}
	return sum;
}

int main(){
	string a, b;

	while(true){
		cout << "Enter the first number to muliply: ";
		cin >> a;
		if(a == "done"){
			cout << "Good Bye" << endl;
			return 0;
		}else{
			cout << "Enter the second numebr to muliply: ";
			cin >> b;
			cout << "First number is " << a << " and second number is " << b << endl;
		}
	}
	return 0;
}
