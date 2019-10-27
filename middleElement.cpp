#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    node* next;
    int data;
};

void push(node** head_ref,int new_data){
    node* new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int nth_element(node* head,int n){
    int count = 0;
    node* current = head;
    while(current!=NULL){
        if(count==n){
            return current->data;
        }
        count++;
        current= current->next;
    }
    assert(0);
}

int length(node* head){
    node* temp = head;
    int count=0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

void middle(node *head){
    cout << "Middle element is "<< nth_element(head, length(head)/2);  
}

int main()
{
    node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head, 15);  
    push(&head, 12);  
    push(&head, 1);
    middle(head);
    
    return 0;
}
