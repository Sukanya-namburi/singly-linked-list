#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int val){
    Node *newnode=new Node();
    newnode->data=val;
    if(head==NULL){
        head=newnode;
        return;
    }
    Node *cur=head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next=newnode;
}
void Display(){
    Node *temp=new Node();
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    Display();
}
