//1)CREATING LINKEDLIST AND PRINTING DATA IN LINKEDLIST
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main(){
    //creating a pointers for 3 nodes
    Node *head=NULL;
    Node *first=NULL;
    Node *second=NULL;
    //allocating memory for pointers
    head=new Node;
    first=new Node;
    second=new Node;
    //assinging data for 3 nodes
    head->data=6;
    first->data=4;
    second->data=9;
    //linking the 3 nodes
    head->next=first;
    first->next=second;
    second->next=NULL;
    //printing the data of 3 nodes
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}

//1)USING FUNCTION
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
//function to print data of linked list
void PrintData(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    //creating a pointers for 3 nodes
    Node *head=NULL;
    Node *first=NULL;
    Node *second=NULL;
    //allocating memory for pointers
    head=new Node;
    first=new Node;
    second=new Node;
    //assinging data for 3 nodes
    head->data=6;
    first->data=4;
    second->data=9;
    //linking the 3 nodes
    head->next=first;
    first->next=second;
    second->next=NULL;
    PrintData(head);//function call
}
