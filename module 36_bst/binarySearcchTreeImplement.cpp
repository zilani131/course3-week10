#include<bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node* left;
    Node* right ;
    Node(int val)
    {
        this->val=val;
        left=NULL;
        right=NULL;
    }
};

//insert into bst
Node* insertIntoBST(Node* root,int d)
{
    if(root==NULL)
    {
        root=new Node(d);
    }
    if(root->val>d)
    {

        root->left=insertIntoBST(root->left,d);
    }
    else if(root->val<d)
    {
        root->right=insertIntoBST(root->right,d);
    }
    return root;
}
int printSpace(int l)
{
    for(int i=0; i<l; i++)
    {
        cout<<"  ";
    }
}
//level order traversal
void levelOrderTraversal(Node* root,int l)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        cout<<root->val;
    }
    else
    {
        cout<<endl;
        printSpace(l);
        cout<<"Root : "<<root->val;
    }

    if(root->left!=NULL)
    {
        cout<<endl;
        printSpace(l);
        cout<<"Left : ";
        levelOrderTraversal(root->left,l+1);
    }
    if(root->right!=NULL)
    {
        cout<<endl;
        printSpace(l);
        cout<<"Right : ";
        levelOrderTraversal(root->right,l+1);
    }
}
///////inorder traversal
void inorderTraversal(Node* root)
{
    if(root==NULL)return;
    if(root->left)
    {
        inorderTraversal(root->left);
    }
    cout<<root->val<<" ";
    if(root->right)
    {
        inorderTraversal(root->right);
    }
}
//searching by recursive; and also al
bool searchInBST(Node*root,int x)
{
    if(root==NULL)false;
    if(root->val==x)
    {
        cout<<root->val<<" ";
        return true;
    }
    if(x>root->val)
    {
        cout<<root->val<<" ";
        if(root->right)
        {
            return  searchInBST(root->right,x);
        }
        else return false;

    }
    else if(root->val>x)
    {
        cout<<root->val<<" ";
        if(root->left)
        {
            return searchInBST(root->left,x);
        }
        else return false;
    }

}
//iterative way
bool searchInBSTiterative(Node*root,int x)
{
    if(root==NULL)return false;
    Node*temp=root;
    while(temp)
    {

        if(temp->val==x)return true;
        if(temp->val>x)
        {
            temp=temp->left;
        }
        else if(temp->val<x)
            temp=temp->right;

    }
    return false;
}

////find min val in an bst
////find max val in an bst
Node* minNode(Node*root)
{
    if(root==NULL)return root;
    if(root->left!=NULL)
    {
        return minNode(root->left);
    }
    return root;
}
/////////////max node
Node* maxNode(Node*root)
{
    if(root==NULL)return root;
    if(root->right!=NULL)
    {
        return maxNode(root->right);
    }
    return root;
}

Node* dltInBST(Node* root,int val)
{
//cout<<"root "<<root->val;
    if(root==NULL)return root;
    if(root->val==val)
    {
        //no child
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            return NULL;
        }
        //1 child and that is left;
        if(root->left!=NULL&&root->right==NULL)
        {
            Node*temp=root->left;
            delete root;
            return temp;
        }
          if(root->right!=NULL&&root->left==NULL)
        {
            Node*temp=root->right;
            delete root;
            return temp;
        }
        //have 2 child
         if(root->left!=NULL&&root->right!=NULL){
            Node* temp=minNode(root->right);   // Node* temp=maxNode(root->left);
            int m=temp->val;
            root->val=m;
             root->right=dltInBST(root->right,m); //root->left=dltInBST(root->left,m)

             return root;

         }
    }
    else if(root->val>val){
        root->left=dltInBST(root->left,val);
        return root;
    }
    else {
        root->right=dltInBST(root->right,val);
        return root;
    }

}
int main()
{
    int n;
    cin>>n;
    Node* root=NULL;
    int val;
    for(int i=0; i<n; i++ )
    {
        cin>>val;
        root=insertIntoBST(root,val);
    }
    levelOrderTraversal(root,0);
    cout<<endl;
cout<<"Inorder traversal "<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<searchInBST(root,2);
    cout<<endl;
    cout<<searchInBST(root,100);
    cout<<endl<<searchInBSTiterative(root,2);
    cout<<endl<<searchInBSTiterative(root,100);
    Node*min=minNode(root);
    cout<<endl<<min->val;
    Node*max=maxNode(root);
    cout<<endl<<max->val;
    Node*temp=NULL;
    temp=dltInBST(root,4);
    levelOrderTraversal(temp,0);
    cout<<endl;
    inorderTraversal(temp);


}
