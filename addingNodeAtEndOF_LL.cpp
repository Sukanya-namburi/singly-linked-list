//adding a new node at end of the linked list
#include<bits/stdc++.h>
using namespace std;
//creating our own own data types using struct
struct Node{
    int data; //stores data of the node
    Node *next; //stores the address of the node      //[data|next]
};
int main(){
    Node *head=new Node(); //creating head(1st node) 
    Node *current=new Node(); //creating 2nd node
    Node *current2=new Node();//creating third node
    head->data=1; //giving data to the head
    current->data=2;
    current2->data=3;
    head->next=current; //linking head with first node    //[data1|next1]->[data2|next2]
    current->next=current2;                                 //head          current
    current2->next=NULL;       //[data1|next1]->[data2|next2]->[data3|next3] 
    Node *temp=head;             //head          //current      //current2
    while(temp){
        cout<<temp->data<<" "; //printing the data in linked list
        temp=temp->next;
    }
    cout<<endl;
    //creating new node to add end of the linked list
    Node *newNode=new Node();
    newNode->data=4;
    newNode->next=NULL;
    //logic to add newNode at end of the linked list
    Node *last=head;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newNode;
    //print linked list after adding newnode at end of the linked list
    Node *temp2=head;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
}
