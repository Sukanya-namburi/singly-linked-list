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
    
    //Creating space for those pointers
    head=new Node();
    first=new Node();
    second=new Node();
    third=new Node();
    
    //Giving the data
    head->data=1;
    first->data=2;
    second->data=3;
    third->data=4;
    
    //Linking the nodes
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=NULL;
    
    Node *temp=head;
    cout<<"Before reversing the linked list: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
    //Logic to reverse the Linked list
    Node *rev1=NULL;
    Node *rev2=NULL;
    while(head!=NULL){
        rev2=head->next;
        head->next=rev1;
        rev1=head;
        head=rev2;
    }
    head=rev1;
    Node *sample=head;
    cout<<"After reversing the linked list: ";
    while(sample!=NULL){
        cout<<sample->data<<" ";
        sample=sample->next;
    }
}
