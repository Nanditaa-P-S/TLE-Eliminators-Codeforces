#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            int x=n+1-arr[i];
            cout<<x<<" ";
        }
        cout<<"\n";
        
    }
}
//The numbers can even be equal!!
// if we make all the elements become equal then the problem is finised
// 1 2 4 5 3
// 1+5=6
// 2+4=6
// 4+2=6
// 5+1=6
// 3+3=6
// so v can make all the elements equal to n-1
// num+x=n+1
// x=n+1-num;

