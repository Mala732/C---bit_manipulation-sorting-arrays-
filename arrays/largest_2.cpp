#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,second_largest,largest, arr[] = {4, 5, 7, 9, 6, 10, 11, 14, 8};
    largest = arr[0]; // largest = 4
    second_largest = arr[0];
    n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n ; i++ ){
        if (arr[i] > second_largest){
            if (arr[i]>largest){
                second_largest = largest;
                largest = arr[i];}
            else{
                second_largest = arr[i];}

        }
    }
    cout << second_largest;
    return 0;
}
