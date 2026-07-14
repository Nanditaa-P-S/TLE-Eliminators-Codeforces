#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>x;
            freq[x]++;
        }
        int count=freq.size();
        if(count==1)
        {
            cout<<"Yes\n";
        }
        else if(count==2){
            int f1,f2,flag=0;
            for(auto i:freq){
                if(flag==0)
                f1=i.second;
                else
                f2=i.second;
                flag=1;
            }
            if(abs(f2-f1)<=1)
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}