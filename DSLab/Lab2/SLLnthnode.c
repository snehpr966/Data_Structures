#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void display( struct node *temp){
    while(temp!=NULL){
    printf("->%d",temp->data);
    temp=temp->next;
    }
}
void printNthfromend(struct node *temp,int n){
    int len=0,i;
    struct node* head=temp;
    while(head!=NULL){
        head=head->next;
        len++;
    }
    if(len<n)
    return;
    head=temp;

for(i=1;i<len-n+1;i++)
head=head->next;
printf("\n%d",head->data);
return;
}
int Iscircular(struct node* temp){
    if(temp==NULL)
    return 1;
    struct node* head;
    head=temp->next;
    while(head!=NULL&&head!=temp)
    head=head->next;
    return(head==temp);
    printf("\nIt is circular");
}

   // return(temp==head);

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
      fourth=(struct node*)malloc(sizeof(struct node));
      //now linking first and second node along with the allocation of data
      head->data=5;
      head->next=second;

      second->data=10;
      second->next=third;

      third->data=20;
      third->next=fourth;
       
      fourth->data=35;
      fourth->next=NULL;
      //display(head);
      // printNthfromend(head,3);
      Iscircular(head);
      return 0;
}

      
