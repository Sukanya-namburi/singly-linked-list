//adding a NewNode at given position in a linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main(){
    int pos=2; //let position is 2
    Node *head=NULL;
    Node *first=NULL;
    Node *third=NULL;
    head=new Node();
    first=new Node();
    third=new Node();
    head->data=1;
    first->data=2;
    third->data=4;
    head->next=first;
    first->next=third;
    third->next=NULL;
    Node *temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
    Node *second=new Node();
    second->data=3;
    second->next=NULL;
    Node *dummy=head;
    //logic to add newnode at given position
    while(pos-1){
        dummy=dummy->next;
        pos--;
    }
    second->next=dummy->next;
    dummy->next=second;
    Node *temp2=head;
    while(temp2){
        cout<<temp2->data;
        temp2=temp2->next;
    }
}
