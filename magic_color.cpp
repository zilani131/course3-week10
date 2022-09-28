#include<bits/stdc++.h>
using namespace std;


void magicColor(){
    int n;
    cin>>n;
    stack<string>q;
    string  k;
    cin>>k;
   q.push(k[0]);
    for(int i=1;i<n;i++){
         //cout<<q.top()<<endl;
   if(q.empty()&&i<n){
            q.push(k[i]);
         }
       else if(q.top()==k[i]&&!q.empty()){
            q.push(k[i]);
            cout<<q.top()<<" 1 "<<i<<endl;
            q.pop();
       cout<<q.top()<<" 2 "<<i<<endl;
            q.pop();
            if(!q.empty()){
         cout<<q.top()<<" 3 "<<i<<endl;}
         }
        else{

             q.push(k[i]);
        }



    }
    if(q.empty()){
        cout<<endl;
        return;
    }
    while(!q.empty()){
        cout<<q.top();
        q.pop();
    }
}

int main(){

magicColor();

}
