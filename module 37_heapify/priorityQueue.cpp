#include<bits/stdc++.h>
using namespace std;
int main(){
priority_queue<int ,vector<int> ,greater <int> > pq;
pq.push(2);
pq.push(4);
pq.push(1);
pq.push(10);
while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}


}
