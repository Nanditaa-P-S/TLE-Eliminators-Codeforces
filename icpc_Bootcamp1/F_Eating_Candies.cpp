#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int left=0,right=n-1;
        long long alice=0,bob=0;
        int count=0;
        while(left<=right){
            if(alice<=bob){
            alice+=arr[left];
            left++;}
            else{
            bob+=arr[right];
            right--;}

            if(alice==bob)
            count = left + (n - right - 1);
        }
        cout<<count<<endl;
    }
}