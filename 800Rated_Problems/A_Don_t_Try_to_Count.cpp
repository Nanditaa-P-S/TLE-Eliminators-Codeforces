#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string st1,st2;
        cin>>n>>m;
        cin>>st1;
        cin>>st2;
        int count=0;
        while(st1.find(st2)==string::npos && count <= 5){
            st1+=st1;
            count++;
        }
        if(st1.find(st2)!=string::npos)
        cout<<count<<endl;
        else
        cout<<-1<<endl;
    }
}

// count <= 5 this 
// if the smallest string is x
// it can become xx xxxx xxxxxxxx xxxxxxxxxxxxxxxx xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//               2   4       8          16                      32
             //  (1≤n⋅m≤25) wuthin this v can reach the utmostttttt 