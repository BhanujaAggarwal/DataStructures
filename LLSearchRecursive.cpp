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
    if(head == NULL)
    return false;
    if(head->data == key)
    return true;
    search(head->next,key);
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
    search(head, 21)? cout<<"Yes" : cout<<"No";
    return 0; 

}