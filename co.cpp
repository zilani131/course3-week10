#include<bits/stdc++.h>
using namespace std;
void chkGoodBad(){
string n;
cin>>n;
vector<string> s;
int i=0;
int j=0;
while(i<n.size()){
     string result;
     i=j;// 110111101
     //cout<<i<<"iteration"<<endl;
    while(result.size()!=3&&i<n.size()){
        result+=n[i];

        i++;
    }
j++;
//cout<<result<<endl;
     s.push_back(result);
}

string chk1="010";
string chk2="101";
for(int i=0;i<s.size();i++){
    cout<<s[i]<<" ";
}
for(int i=0;i<s.size();i++){
   if(s[i]==chk1||s[i]==chk2){
    cout<<"Good"<<endl;
   return;
   }

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
