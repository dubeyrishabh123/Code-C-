#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
 

Node* NodeLinkedList(int arr[],int index,int size,Node* prev )
{
    if(index==size)
    {
        return prev;
    }
    
        Node* temp;
        temp=new Node(arr[index]);
        temp->next= prev;

        return NodeLinkedList( arr, index+1, size, temp );
  
}
 int main()
 {
    Node *Head;
    Head=NULL;

   int arr[]={1,2,3,4,5,6,7,8};


   Head=NodeLinkedList( arr,0,8,Head );
    int x=3;
    int value=8;
    x--;
    Node* temp1=Head;
    while(x--)
    {
        temp1=temp1->next;
    }
    Node*temp2=new Node(value);
    temp2->next=temp1->next;
    temp1->next=temp2;
    
    Node* temp;
    temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;


    }

return 0;
 }