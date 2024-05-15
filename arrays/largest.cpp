#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,largest, arr[5] = {4, 5, 2, 9, 6};
    largest = arr[0]; // largest = 4
    n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n ; i++ ){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << largest;
    return 0;
}
