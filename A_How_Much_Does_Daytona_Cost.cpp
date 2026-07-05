#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n,k,x;
      cin>>n>>k;
      int flag=0;
      for(int i=0;i<n;i++)
      {
        cin>>x;
        if(x==k)
        flag=1;
      }
      if(flag==1)
      cout<<"YES\n";
      else
      cout<<"NO\n";  
    }
    return 0;
}