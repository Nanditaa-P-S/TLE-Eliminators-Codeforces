#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int rating;
        cin>>rating;
        if(rating<=1399)
        cout<<"Division 4\n";
        else if(rating<=1599)
        cout<<"Division 3\n";
        else if(rating<=1899)
        cout<<"Division 2\n";
        else
        cout<<"Division 1\n";
    }
    return 0;
}