#include<iostream>>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int neg=0,pos=0,flip=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==-1) neg++;
            else
            pos++;
        }
        while(neg>pos){
            pos++;
            neg--;
            flip++;
        }
        if(neg%2==1)
        flip++;
        cout<<flip<<endl;

    }
    return 0;
}