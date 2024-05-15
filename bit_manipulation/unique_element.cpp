#include <iostream>
using namespace std;

int main(){
    int n,x=0, arr[] = {2, 1, 2, 3, 5,4,3,5,4};
    n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        x = x ^ arr[i];
    }
    cout << x;

}