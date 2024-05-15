#include<iostream>

using namespace std;

int main(){
    int t,police=0,untreated=0;
    cout<<"Enter number of events";
    cin>>t;
    int event[t];
    for (int i =0; i<t; ++i)
    {
        cin>>event[i];
    }
    for (int i=0; i<t; ++i){
        if( event[i]==-1){
            if(police!=0){
                police--;
            }
            else{
                untreated++;
            }
        }
        else{
            police= police+ event[i];
        }   
    }
    cout<<"Untreated: "<<untreated;
    return 0;
}