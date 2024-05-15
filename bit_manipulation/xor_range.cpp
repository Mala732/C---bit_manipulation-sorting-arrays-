#include <iostream>
using namespace std;

int opp1(int n){
    if ( n % 4 == 1){
        return (1);
    }
    if ( n % 4 == 2 ){
        return (n+1);
    }
    if ( n % 4 == 3 ){
        return (0);
    }
    if ( n % 4 == 4 ){
        return (n);
    }
}

int main(){
    int L,R,resL,resR;
    cin>> L;
    cin>> R;
    cout << (opp1(R)^opp1(L-1));
    return 0;
}


