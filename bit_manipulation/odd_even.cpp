#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Enter number: ";
    cin >> a;
    if ( a & 1 ){
        cout << "Number is odd";
    }
    else{
        cout << "Number is even";
    }
}