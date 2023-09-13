#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void middleNode(struct node* head){
    int length,middle;
    struct node*temp;
    struct node*fast;
    if(head!=NULL){
        temp=head;
        temp=temp->next;
        length++;
        fast=head;
    }
    else{
    printf("List is empty");
    }
    middle=length/2+1;
    while(fast!=NULL&&fast->next!=NULL){
        temp=temp->next;
        fast=fast->next->next;
    }
     printf("The middle node is[%d]\n\n",temp->data);
}
 void push(struct node** list,int new_data){
 struct node* new_node
 =(struct node*)malloc(sizeof(struct node));
 new_node->data=new_data;
 new_node->next=(*list);
 (*list)=new_node;
 }
 void printList(struct node* ptr){
    while(ptr!=NULL){
    printf("%d->",ptr->data);
    ptr=ptr->next;
 }
 printf("NULL\n");
 }
 int main()
 {
    struct node* head=NULL;
    int i;
    for(i=5;i>0;i--){
        push(&head,i);
        printList(head);
        middleNode(head);
    }
    return 0;
 }
