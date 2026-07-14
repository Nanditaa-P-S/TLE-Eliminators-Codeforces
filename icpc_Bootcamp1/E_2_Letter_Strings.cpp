#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long count=0;
        map<string,int> ans;
        for(int i=0;i<n;i++){
            string s,temp;
            cin>>s;
            for(char c='a';c<='k';c++){
                if(c!=s[0]){
                    temp=s;
                    temp[0]=c;
                    count+=ans[temp];
                }
            }
            for(char c='a';c<='k';c++){
                if(c!=s[1]){
                    temp=s;
                    temp[1]=c;
                    count+=ans[temp];
                }
            }
            ans[s]++;
        }
        cout<<count<<"\n";
    }
}