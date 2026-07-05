#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int low=0,high=0;
    for(char ch:s){
        if(ch>='a' && ch<='z')
        low++;
        else
        high++;
    }
    if(high>low)
    {
        for(char ch:s)
        cout<<(char)toupper(ch);//else the ASCII values will be given 
    }
    else
    for(char ch:s)
        cout<<(char)tolower(ch);
    return 0;
}