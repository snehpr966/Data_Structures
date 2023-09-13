#include<stdio.h>
#include<stdlib.h>
void insert_begin(int);
struct node {
    int data;
    struct node* next;
};
struct node *head;

void insert_begin(int n)
{
struct node *temp;
struct node *new_node=(struct node*)malloc(sizeof(struct node));
if (head==NULL)
{
    head=new_node;
    new_node->next=head;
}
else
{
    temp=head;
    while(temp->next!=head)
    temp=temp->next;
    new_node->next=head;
    temp=new_node;
    head=new_node;
}
printf("\node inserted");
}
void main()
{
    do
    {
    int choice,num;
    printf("enter num to be inserted");
    scanf("%d",&num);
    void insert_begin(int);
    printf("enter choice 0 if you want to insert more");
    scanf("%d",&choice);
}while(choice==0);
}
