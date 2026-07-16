#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[10][10];
        int sum=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='X'){
                    int top=i;
                    int bottom=10-i-1;
                    int left=j;
                    int right=10-j-1;
                    int ans=min(min(top,bottom),min(left,right));
                    sum+=ans+1;
                }
                
            }
        }
        cout<<sum<<"\n";
    }
} 