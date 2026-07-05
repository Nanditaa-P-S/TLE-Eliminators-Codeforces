#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        if(arr[0]>arr[1])
        cout<<"First\n";
        else if(arr[0]<arr[1])
        cout<<"Second\n";
        else
        {
            if(arr[2]%2==1)
            cout<<"First\n";
            else
            cout<<"Second\n";
        }
    }
    return 0;
}