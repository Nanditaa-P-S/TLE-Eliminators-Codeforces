#include<iostream>
using namespace std;
bool findgood(int a,int b){
    int gcd;
  while(a>0 && b>0){
    if(a>b)
    a=a%b;
    else
    b=b%a;
  }
  if(a==0)
  gcd=b;
  else
  gcd = a;
  if(gcd<=2)
  return true;
  return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(findgood(arr[i],arr[j])){
                flag=1;
                break;
            }
            if(flag)
            break;
            }
        }
        if(flag)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}