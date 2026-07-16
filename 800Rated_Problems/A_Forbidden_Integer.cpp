#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,forbidden;
        cin>>n>>k>>forbidden;
        if(forbidden==1 && k==1){
        cout<<"NO\n";
        continue;
        }
        if(forbidden==1){//if the forbidden element is 1 then only there is a problem
            if(k==2 && n%2==1)
            {
                cout<<"NO\n";
            }
            else if(n%2==0)
            {
                cout<<"YES\n";
                cout<<n/2<<"\n";
                for(int i=0;i<n/2;i++)
                cout<<2<<" ";
                cout<<"\n";
            }
            else
            {
                // 3 =3-- 1 operation
                // 5 =3+2 -- 2 operation
                // 7 =3+2+2 -- 3 operation
                // 9 =3+2+2+2 -- 4 operation --n/2 operations
                cout<<"YES\n";
                cout<<n/2<<"\n";
                cout<<3<<" ";
                for(int i=0;i<(n-3)/2;i++)
                cout<<2<<" ";
                cout<<"\n";
            }
        }
        else
        {
            cout<<"YES\n";
            cout<<n<<"\n";
            for(int i=0;i<n;i++)
            cout<<1<<" ";
            cout<<"\n";
        }
    }
}