#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,second_smallest,smallest, arr[] = {4, 5, 7, 9, 6, 10, 11, 14, 8};
    smallest = arr[0]; // smallest = 4
    n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n ; i++ ){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    second_smallest = ;
    for (int i = 0; i < n ; i++ ){
        if (arr[i] < second_smallest && arr[i] > smallest){
            second_smallest = arr[i];
        }
    }
    cout << second_smallest<<endl;
    cout << smallest;
    return 0;
}