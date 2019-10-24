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

void deleteNode(node** head_ref,int pos){
    if(*head_ref == NULL){
        return;
    }
    node* temp = *head_ref;
    if(pos == 0){
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for(int i=0;i<pos-1 && temp!=NULL;i++){
        temp = temp->next;
    }
    if(temp==NULL || temp->next==NULL){
        return;
    }
    node* nextt = temp->next->next;
    free(temp->next);
    temp->next = nextt;
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
    push(&head, 8);
  
    puts("Created Linked List: "); 
    printList(head); 
    deleteNode(&head, 4); 
    puts("\nLinked List after Deletion at position 4: "); 
    printList(head); 
    return 0; 

}