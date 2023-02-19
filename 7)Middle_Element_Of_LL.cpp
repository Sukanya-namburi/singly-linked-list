#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main(){
    //Creating the pointers
    Node *head=NULL;
    Node *first=NULL;
    Node *second=NULL;
    Node *third=NULL;
    Node *fourth=NULL;
    
    //Creating space for those pointers
    head=new Node();
    first=new Node();
    second=new Node();
    third=new Node();
    fourth=new Node();
    
    //Giving the data
    head->data=1;
    first->data=2;
    second->data=3;
    third->data=4;
    fourth->data=5;
    
    //Linking the nodes
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    //Logic to find the middle element of linked list
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}
