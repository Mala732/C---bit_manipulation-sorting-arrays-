#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,80,70,40,79,65};
    cout<<sizeof(arr[])<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;

}