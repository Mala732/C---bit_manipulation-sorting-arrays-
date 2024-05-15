#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, arr[] = {4, 5, 6, 9, 2};
    n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    cout<< arr[n-1];
}