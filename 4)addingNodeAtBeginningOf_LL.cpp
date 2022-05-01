//adding a NewNode at beginning of a linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main(){
    Node *head=NULL;
    Node *first=NULL;
    Node *second=NULL;
    head=new Node();
    first=new Node();
    second=new Node();
    head->data=1;
    first->data=2;
    second->data=3;
    head->next=first;
    first->next=second;
    second->next=NULL;
    Node *temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
    //logic to add a NewNode at begining of a linkedlist
    Node *NewNode=new Node();
    NewNode->data=0;
    NewNode->next=NULL;
    NewNode->next=head;
    head=NewNode;
    Node *temp2=head;
    while(temp2){
        cout<<temp2->data;
        temp2=temp2->next;
    }
}
