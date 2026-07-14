#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,hr,min;
        cin>>n>>hr>>min;
        int starttime=hr*60+min;
        int minimum=24*60; // Initialize with maximum possible minutes in a day
        for(int i=0;i<n;i++){
            int hr1,min1,ans;
            cin>>hr1>>min1;
            int endtime=hr1*60+min1;
            if(endtime<starttime){
                ans=24*60-starttime +endtime;
            }
            else{
                ans=endtime-starttime;
            
            }
            if(ans<minimum)
            minimum=ans;

        }
        cout<<minimum/60 <<" "<<minimum%60<<"\n";

    }
    return 0;
}