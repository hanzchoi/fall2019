#include <iostream>
using namespace std;

int main(){
    
//    int y = 2;
//    cout << "y = " << y << endl;
//    int x = --y;
//    cout << "y = " << y << endl;
//    int z = y--;
//    cout << "y = " << y << endl;
//
//    cout << endl;
//
//    cout << "y = " << y << endl;
//    cout << "x = " << x << endl;
//    cout << "z = " << z << endl;
    
    int x = 5;
    cout << "Before the while loop x = " << x << endl;
    
    int count = 1;
    
    while(x-- > 0){
        cout << "Count: " << count << ". In the while loop x = " << x << endl;
        count++;
    }
    
    cout << endl;
    cout << "Counter: " << count << endl;
    cout << "Outside the loop x: " << x << endl;
    
    return 0;
}



