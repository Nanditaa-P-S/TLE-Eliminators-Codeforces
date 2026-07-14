#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2)
            count++;
        }
        if(count%2!=0)
        cout<<-1<<endl;
        else if(count==0)
        cout<<1<<endl;
        else{
            int i=0,twos=0;
            while(twos!=count/2){
                if(arr[i]==2){
                twos++;
            }
            i++;//
            }
            cout<<i<<endl;
        }        
    }}