#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while( t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        vector<int> ans1;
        vector<int> ans2;
        ans2.push_back(arr[0]);
        int flag=0;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[0])
            ans2.push_back(arr[i]);
            else
            {
            flag=1;
            ans1.push_back(arr[i]);
            }
        }
        if(flag==1)
        {
            cout<<ans1.size()<<" "<<ans2.size()<<"\n";
            for(auto i:ans1)
            cout<<i<<" ";
            cout<<"\n";
            for(auto i:ans2)
            cout<<i<<" ";
            cout<<"\n";

        }
        else
        cout<<-1<<"\n";

    }
    return 0;
}