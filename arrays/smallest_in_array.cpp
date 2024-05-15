#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,smallest, arr[5] = {4, 5, 6, 9, 2};
    smallest = arr[0];
    n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n ; i++ ){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << smallest;
    return 0;
}