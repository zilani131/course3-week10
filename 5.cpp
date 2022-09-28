#include<bits/stdc++.h>
using namespace std;
void prime(){
int n;
cin>>n;
if(n==1){
    cout<<"No"<<endl;
    return;
}
if(n==2||n==3){
    cout<<"True"<<endl;
}
if(n%2==0||n%3==0){
    cout<<"No"<<endl
    return;
}
int flag=0;
for(int i=2;i<=n%2;i++){
    if(n%i==0){
     flag++;
    }
}
if(flag==0){
   cout<<"Yes"<<endl;
}
else{cout<<"No"<<endl;}
}
int main(){


int t;
cin>>t;
while(t--){
    prime();
}
}
