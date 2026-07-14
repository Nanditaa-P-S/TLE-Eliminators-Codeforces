// The sum of efficiencies of all teams is always 0.
// Every goal scored by one team is a goal scored against another team.
// So each goal contributes +1 to one team's efficiency and -1 to another's.
// Hence, all contributions cancel out.
// Missing efficiency = -(sum of the given efficiencies).
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,sum=0;
        cin>>n;
        for(int i=0;i<n-1;i++){//given only n-1 efficiency
            cin>>x;
            sum+=x;
        }
        cout<<-sum<<endl;//0-sum;
    }
}