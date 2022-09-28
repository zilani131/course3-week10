#include<bits/stdc++.h>
using namespace std;

void magicColor(){
    int n;
    cin>>n;
    stack<char>q;
    char k;
    for(int i=0;i<n;i++){
        cin>>k;
        if(q.top()!=k){
            q.push(k);
        }
        if(q.top()==k)
        {
            while(q.top()==k){
                q.pop();
            }
        }
    }
    while(!q.empty()){
        cout<<q.top();
        q.pop();
    }
}

