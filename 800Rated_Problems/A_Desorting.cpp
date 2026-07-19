#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(!is_sorted(arr.begin(),arr.end())){
        cout<<0<<"\n";
        continue;
        }
        else{
        int minim=INT_MAX;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<minim)
            minim=arr[i]-arr[i-1];
        }
    cout<<minim/2+1<<"\n";
    }

    }
    return 0;
}