#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans=100001;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(abs(arr[i])<ans)
        ans=abs(arr[i]);
    }
    cout<<ans;

}