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

int length(node* head){
    if(head == NULL)
    return 0;
    return 1 + length(head->next);
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
    push(&head, 212);  
    push(&head, 1);  
    cout<<"length of Linked list is ";
    cout<<length(head);
    return 0; 

}