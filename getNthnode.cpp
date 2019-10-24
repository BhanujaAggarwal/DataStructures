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

int main()
{
    node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head, 1);  
    push(&head, 12);  
    push(&head, 1);
    cout << "Element at index 3 is " << nth_element(head, 3);  
    
    return 0;
}
