#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: \n";
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n ; i++){
        cout << arr[n-i-1] <<"\t";
        
    }
    return 0;
}
    
