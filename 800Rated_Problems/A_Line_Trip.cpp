#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int> arr(n+1);
        arr[0]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        
        int greater=0;
        for(int i=0;i<n;i++){
            if(arr[i+1]-arr[i]>greater){
                greater=arr[i+1]-arr[i];
            }
        }
        int lasttravel=(d-arr[n])*2;
        cout<<max(greater,lasttravel)<<"\n";
    }
    return 0;
}