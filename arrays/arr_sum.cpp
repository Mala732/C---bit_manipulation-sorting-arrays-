#include <iostream>
using namespace std;

int main(){
    int n,sum=0,avg;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for ( int i = 0; i < n ; i ++){
        cin >> arr[i];
        sum = sum + arr[i];

    }
    avg = sum/n;
    cout << sum << endl;
    cout << avg;
    return 0;
}