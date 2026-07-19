#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        
        cin>>n;
        if(n<10)
        {
            cout<<n<<"\n";
            continue;
        }
        int digit=(int)log10(n)+1;
        int divisor=pow(10,digit-1); //log10(n)+1-1
        cout<<n/divisor + 9*(digit-1)<<"\n";
    }
    return 0;
}
// 1 - 9 9 numbers
// 10 - 19 1 number
// 20 - 29 1 number
// ie) 10-99 - 9 numbers
// 100-999 - 9 numners