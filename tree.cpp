#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    int data;
    Node* next=NULL;
    Node* prev=NULL;
    Node(int val)
    {
         data=val;
         next=NULL;
         prev=NULL;
    }
};

Node* Binary()
{
    int x;
    cout<<"enter val"<<endl;
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    Node* temp= new Node(x);
    cout<<"left of "<<x<<endl;
    temp->prev=Binary();
    cout<<"right of"<<x<<endl;
    temp->next=Binary ();
    return temp;

}
int main()
{
    Node* root=Binary();
    return 0;
}