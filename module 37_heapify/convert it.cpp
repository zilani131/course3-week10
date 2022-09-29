#include<bits/stdc++.h>
using namespace std;


void buildTreeTraversalOrder(tNode* &root){
int a;
cin>>a;
root=new tNode(a);
queue <tNode *>q;
q.push(root);
while(!q.empty()){
    tNode*presentNode=q.front();
    q.pop();
    int x,y;
    cin>>x>>y;
    tNode*l=NULL;
    tNode*r=NULL;
    if(x!=-1){
        l=new tNode(x);
    }
    if(y!=-1){
        r=new tNode(y);
    }
    presentNode->left=l;
    presentNode->right=r;
    if(l!=NULL){
        q.push(l);
    }
    if(r!=NULL){
        q.push(r);
    }
}

}

int main()
