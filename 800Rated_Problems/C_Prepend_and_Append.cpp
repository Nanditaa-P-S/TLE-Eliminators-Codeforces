#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int totallength=n;
        for(int i=0,j=n-1;i<j;i++,j--){
            if(arr[i]=='0' && arr[j]=='1' || arr[i]=='1' && arr[j]=='0')
            totallength-=2;
            else 
            break;
        }
        cout<<totallength<<"\n";
    }
}