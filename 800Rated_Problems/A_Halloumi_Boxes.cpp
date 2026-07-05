#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,swaps;
        cin>>n>>swaps;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(swaps>1)
        cout<<"YES\n";
        else
        {
            if(is_sorted(arr.begin(),arr.end())){
                cout<<"YES\n";
            }
            else
            cout<<"NO\n";

        }
    }
    return 0;
}