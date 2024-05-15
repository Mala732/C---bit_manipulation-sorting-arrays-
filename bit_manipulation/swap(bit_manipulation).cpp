#include <iostream>

using namespace std;

int main(){
    int a = 5, b = 7; // a = 101, b = 111
    a = a ^ b;        // a = 101 xor 111 = 010, b = 111
    b = a ^ b;        // a = 010, b = 010 xor 111 = 101 
    a = a ^ b;        // a = 010 xor 101, b = 101
    cout << a << endl;// a = 7
    cout << b;        // b = 5
    return 0;
}