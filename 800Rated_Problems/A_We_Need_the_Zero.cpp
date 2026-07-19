#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            ans^=x;
        }
        if(n%2==1)
        cout<<ans<<"\n";
        else if(n%2==0 && ans==0)
        cout<<1<<"\n";
        else
        cout<<-1<<"\n";
    }
    return 0;
}
/*1 2 5 
1^x   ^  2^x  ^  5^x = 0
we know x^x=0 
so if its even number no x remains 
if its an odd number an x will remain 

for odd ,
1^2^5 ^ x =0 
then that x is gonna be the same given numbers' xor then only (1^2^5) ^ x =0 

for even ,
the number's xor should give 0 already else the answer will be -1
All x's disappear.

So x cannot change the final XOR at all.

Therefore if the array XOR is not already 0,
it is impossible.


if the numbers gives 0 already then x can be anyyyy number cause thats gonna disappear however
*/ 

