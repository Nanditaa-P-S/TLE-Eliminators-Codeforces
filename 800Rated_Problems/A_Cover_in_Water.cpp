#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int dotcount=0,adj=0;
        for(int i=0;i<n;i++){
            if(arr[i]=='.'){
            dotcount++;
            adj++;
            }
            else 
            adj=0;
            if(adj==3)
            {
                cout<<2<<"\n";
                break;
            }
           
        }
         if(adj!=3)
            cout<<dotcount<<"\n";
    }
}