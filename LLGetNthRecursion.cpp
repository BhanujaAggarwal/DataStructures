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

int getnth(node *head,int n){
    int count=1;
    if(count==n)
    return head->data;
    getnth(head->next,n-1);
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
    cout<<getnth(head, 3);
    return 0; 

}