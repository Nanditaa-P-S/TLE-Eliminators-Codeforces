#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int x,y,xdest,ydest;
        cin>>x>>y>>xdest>>ydest;
        if(y>ydest)
        {
            cout<<-1<<"\n";
            continue;
        }
        int diff=ydest-y;
        ans+=diff;

        x+=diff;
        y+=diff;

        // top right over now v have to move to the left 
        if(x<xdest)
        {
            cout<<-1<<"\n";
            continue;
        }
        ans+=x-xdest;
        cout<<ans<<"\n";

    }
}
// -1 0 -1 2
// top right (x+1,y+1)
// (1,2)  ----->This operations also have to do
//  (x-1,y)
// next v have to compare the c values to move to the left