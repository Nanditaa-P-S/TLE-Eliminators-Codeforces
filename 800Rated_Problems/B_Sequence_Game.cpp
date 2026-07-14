#include<iostream>
#include<vector>
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
        if(n==1)
        {
            cout<<1<<endl<<arr[0]<<endl;
            continue;
        }
        vector<int>ans;
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1])
            ans.push_back(arr[i]);
            else{
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
            }
        }
        cout<<ans.size()<<"\n";
        for(int i:ans)
        cout<<i<<" ";
        cout<<"\n";
    }
}