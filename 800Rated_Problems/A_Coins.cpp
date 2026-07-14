// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         while(n>k && n>=0)
//         n-=2;
    
//     if(n==0)
//     cout<<"YES\n";
//     else if(n==k)
//     cout<<"YES\n";
//     else 
//     cout<<"NO\n";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n%2==0)
        cout<<"YES\n";
        else if(k%2==1 && k<=n)//The second number should be an odd number if the first number isnt even
        cout<<"YES\n" ;
        else 
        cout<<"NO\n";
    }
}