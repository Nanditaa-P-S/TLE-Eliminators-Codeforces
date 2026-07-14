#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[50];
        int mn=10000001;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<mn)
                mn=a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans+=a[i]-mn;
        cout<<ans<<endl;
    }
}