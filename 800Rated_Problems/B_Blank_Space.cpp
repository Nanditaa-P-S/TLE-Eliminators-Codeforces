#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int count=0,maxcount=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==0)
            {
               count++; 
            }
            else{
            if(count>maxcount)
            maxcount=count;
            count=0;
            }
        }
        if(count>maxcount)
            maxcount=count;

        cout<<maxcount<<"\n";
    }
}