#include<bits/stdc++.h>
using namespace std;
void chkGoodBad(){
string n;
cin>>n;
//vector<string> s;
int i=0;
int j=0;
string chk1="010";
string chk2="101";
while(i<n.size()){
     string result;
     i=j;// 110111101
     //cout<<i<<"iteration"<<endl;
    while(result.size()!=3&&i<n.size()){
        result+=n[i];

        i++;
    }
if(result==chk1||result==chk2){
    cout<<"Good";
    return;
}
j++;
}

cout<<"Bad"<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
    chkGoodBad();
}
}

