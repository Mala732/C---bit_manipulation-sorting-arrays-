#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,second_largest,largest, arr[5] = {4, 5, 2, 9, 6};
    largest = arr[0]; // largest = 4
    n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n ; i++ ){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    second_largest = 0;
    for(int i = 0; i < n ; i++ ){
        if(arr[i] < largest && arr[i]>second_largest){
            second_largest = arr[i];
        }}
    cout << second_largest;
    return 0;
}