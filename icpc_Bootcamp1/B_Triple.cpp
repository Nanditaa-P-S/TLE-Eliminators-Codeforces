#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int flag=0;
        map<int,int>ans;
        for(int i=0;i<n;i++){
            cin>>x;
            ans[x]++;
        }
        for(auto i:ans){
            if(i.second>=3){
            cout<<i.first<<"\n";
            flag=1;
            break;
            }
            
        }
        if(flag==0)
        cout<<-1<<endl;

    }
    return 0;
}