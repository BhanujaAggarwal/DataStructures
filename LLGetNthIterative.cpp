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

void getnth(node **head_ref,int n){
    
    node* temp = *head_ref;
    for(int i=0;i<n && temp!=NULL;i++){
        temp = temp->next;
    }
    if(temp==NULL) return;
    cout<<temp->data;
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
    push(&head, 12);  
    push(&head, 1);  
    cout<<"Element at index 3 is ";
    getnth(&head, 3);
    return 0; 

}