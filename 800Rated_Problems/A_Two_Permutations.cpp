#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a==n && b==n)
        {
            cout<<"Yes\n";
            continue;
        }
        if(n-a-b>=2)
        cout<<"Yes\n";
        else
        cout<<"No\n";

    }
}
// 1

// 12
// 12

// 123
// 123

// 1234
// 1324

// it means if 2 numbers are left then only its possible