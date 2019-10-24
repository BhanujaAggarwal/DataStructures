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

void deleteNode(node** head_ref,int key){
    node* temp = *head_ref ,*prev;
    if(temp != NULL && temp->data == key ){
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    if(temp==NULL) return;
    prev->next = temp->next;
    free(temp);
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
  
    push(&head, 7); 
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 2); 
  
    puts("Created Linked List: "); 
    printList(head); 
    deleteNode(&head, 1); 
    puts("\nLinked List after Deletion of 1: "); 
    printList(head); 
    return 0; 

}