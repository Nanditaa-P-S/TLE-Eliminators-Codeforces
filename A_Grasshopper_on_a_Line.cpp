#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int jump,forbid;
        cin>>jump>>forbid;
        if(jump%forbid==0)
        {
            cout<<"2\n";
            cout<<jump-1<<" "<<1<<"\n";
        }
        else
        cout<<"1\n"<<jump<<"\n";
    }
    return 0;
}
