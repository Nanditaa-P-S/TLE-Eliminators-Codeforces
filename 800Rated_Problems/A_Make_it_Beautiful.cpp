#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int start=arr[0];
        int flag=0;
        for(int i=1;i<n;i++){
            if(arr[i]!=start)
            {
                flag=1;
                swap(arr[i],arr[1]);
                break;
            }

        }
        
        if(flag==0){
        cout<<"NO\n";
        continue;
        }
        else
        cout<<"YES\n";
        for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
// 6 6 6 6 3 3 