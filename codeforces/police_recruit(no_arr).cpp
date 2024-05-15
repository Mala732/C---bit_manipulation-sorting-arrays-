#include<iostream>

using namespace std;

int main(){
    int n;int event,police=0,untreated=0;
    cout<<"Enter number of events";
    cin>>t;
    for(int i=1; i<=n;++i){
        cout<<"Enter event";
        cin>>event;
        //cout<<event;
        if( event==-1){
            if(police> 0){
                police--;
            }
            else{
                untreated++;
            }
        }
        else{
            police+=event;
        }
            
    }
    cout<<"Untreated: "<<untreated<<endl;
    return 0;
}