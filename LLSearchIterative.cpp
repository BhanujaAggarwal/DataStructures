#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    node* next;
    int data;
};

void push(node** head_ref,int new_data){
    node* new_node = new node();
    new_node-> data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

bool search(node* head,int key){
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->data == key)
        return true;
        temp=temp->next;
    }
    return false;
}

void printList(node* nd){
    while(nd!=NULL){
        cout<<nd->data<<" ";
        nd = nd->next;
    }
}

int main()
{
    node* head = NULL; 
    push(&head, 1);  
    push(&head, 4);  
    push(&head, 1);  
    push(&head, 21);  
    push(&head, 1);  
    search(head, 21)? cout<<"Yes" : cout<<"No";
    return 0; 

}