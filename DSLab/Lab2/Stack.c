//Stack using arrays
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 10
void push(int);
void pop();
void display();
int stack[max],top=-1;
void main()
{
 int value,choice;
 //clrscr();
 while(1){
    printf("1.Push\n2.Pop\n3.Display\n4.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        printf("Enter the vaue to be inserted");
        scanf("%d",&value);
        push(value);
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
       // case 4:
       // exit(0);
        default:
        printf("Wrong selection\n");
    }
    }
}
void push(int value){
    if(top==max-1)
    printf("Stack is Full");
    else{
        top++;
        stack[top]=value;
        printf("Element inserted successfully");
        }
}
void pop()
{
    if(top==-1)
    printf("Stack is Empty\nDeletion not possible");
    else{
        printf("Deleted:%d",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    printf("\nStack is Empty");
    else{
        int i;
        printf("Stack elements are\n");
        for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    }
}