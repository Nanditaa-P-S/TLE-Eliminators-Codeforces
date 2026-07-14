#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int row,col;
    cin>>row>>col;
    string arr[row];
    for(int i=0;i<row;i++)
    cin>>arr[i];
for(int j=0;j<col;j++){
int star=0;
int last=row-1;

for(int i=row-1;i>=0;i--){
if(arr[i][j]=='*')
star++;
if(arr[i][j]=='o'){

for(int k=i+1;k<=last;k++)
arr[k][j]='.';

for(int k=last;star>0;k--,star--)
arr[k][j]='*';

last=i-1;
star=0;
}
}

for(int k=0;k<=last;k++)
arr[k][j]='.';

for(int k=last;star>0;k--,star--)
arr[k][j]='*';
}

for(int i=0;i<row;i++)
cout<<arr[i]<<"\n";
cout<<"\n";
}
return 0;
}