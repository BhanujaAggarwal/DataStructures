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

int length_of_list(node* head){
    int len=0;
    node* current = head;
    while(current!=NULL){
        len++;
        current= current->next;
    }
    return len;
}

int nth_element(node* head,int n){
    node* current = head;
    int count =1;
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
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 35);
    int pos_from_end;
    cin>>pos_from_end;
    cout<<nth_element(head, length_of_list(head)-pos_from_end+1); 
    
    return 0;
}
