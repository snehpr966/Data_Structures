#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void createList(){
    if(head==NULL){
     int n;
     printf("Enter the no of nodes");
     scanf("%d",&n);
    if(n!=0){
        int data;
        struct node* new_node;
        struct node* temp;
        new_node=malloc(sizeof(struct node));
        head=new_node;
        head=temp;
        printf("\nEnter data to be inserted");
        scanf("%d",&data);
        head->data=data;

        for(int i=2;i<=n;i++){
        new_node=malloc(sizeof(struct node))
        temp->next=new_node;
        printf("\nEnter data to be inserted");
        scanf("%d",&data);
        new_node->data=data;
        temp=temp->next;
        }
    }
    printf("/nThe list is created");
    }
    else
    printf("/nThe is already created");
}
void mergeTwoLists(struct node *LL1,struct node *LL2){
    struct node* curr;
    while(LL1!=NULL&&LL2!=NULL){
        if((LL1->data)>(LL2->data)){
            curr=LL1->data;
        }else
        curr=LL2->data;
    }
}


