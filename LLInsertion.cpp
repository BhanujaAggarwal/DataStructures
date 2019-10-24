#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    node* next;
    int data;
};

void push(node** head_ref , int new_data){
    node* new_node = new node();
    new_node -> data = new_data;
    new_node -> next = *head_ref;
    *head_ref = new_node;
}

void insert(node* prev_node,int new_data){
    node* new_node = new node();
    new_node -> data = new_data;
    new_node ->next = prev_node->next;
    prev_node ->next = new_node;
}

void append(node** head_ref,int new_data){
    node* new_node = new node();
    new_node->data = new_data;
    new_node -> next = NULL;
    node* last = *head_ref;
    if(*head_ref==NULL){
        *head_ref = new_node;
        return;
    }
    while(last->next!=NULL){
        last = last->next;
    }
    last->next = new_node;
}

void print(node* nd){
    while(nd!=NULL){
        cout<<nd->data<<" ";
        nd = nd->next;
    }
}


int main()
{
    node* head = NULL;  
      
    append(&head, 6);  
      
    push(&head, 7);  
       
    push(&head, 1);  
      
    append(&head, 4);  
      
    insert(head->next, 8);  
      
    cout<<"Created Linked list is: ";  
    print(head);  
      
    return 0;  

}