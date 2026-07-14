#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int arr[n];
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i+=2){
            if(arr[i]%2!=arr[0]%2){
            flag=1;
            break;
        }
        }
        for(int i=1;i<n;i+=2){
            if(arr[i]%2!=arr[1]%2){
            flag=1;
            break;}
        }
        if(flag==1) 
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}