#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    int data;
    Node* left=NULL;
    Node* right=NULL;
    Node(int val)
    {
         data=val;
         left=NULL;
         right=NULL;
    }
};
Node* form(Node* root,int target)
{
        if(!root)
        {
            Node * temp=new Node(target);
            return temp;
        }
        if(target<root->data)
        {
            root->left=form(root->left,target);
        }

        if(target>root->data)
        {
            root->right=form(root->right,target);
        }
        return root;
}
void show(Node* root)
{
    if(!root)
    {
        return;
    }
    show(root->left);
    cout<<root->data;
    show(root->right);
    
}
int main()
{

    int n;
    cin>>n;
   Node*root=NULL;
    for(int i=0;i<n;i++)
    {
        int target;
        cin>>target;
        root=form(root,target);
    }
    show(root);
    return 0;
}