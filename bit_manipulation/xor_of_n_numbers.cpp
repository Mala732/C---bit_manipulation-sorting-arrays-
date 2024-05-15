#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if ( n % 4 == 1){
        cout << 1;
    }
    if ( n % 4 == 2 ){
        cout << n+1;
    }
    if ( n % 4 == 3 ){
        cout << 0;
    }
    if ( n % 4 == 4 ){
        cout << n;
    }
    return 0;
}
