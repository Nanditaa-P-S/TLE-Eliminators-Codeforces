#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,oddCount=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2==1)
            oddCount++;
        }
        if(oddCount%2==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}