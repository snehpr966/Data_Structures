// C program for the all operations in
// the Singly linked List
#include <stdio.h>
#include <stdlib.h>
// linked List Node
struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;
  
// Function to create list with n nodes initially 
void createList()
{
    if (head == NULL) {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0) {
            int data;
            struct node* newnode;
            struct node* temp;
            newnode = malloc(sizeof(struct node));
            head = newnode;
            temp = head;
            printf("\nEnter number to"
                   " be inserted : ");
            scanf("%d", &data);
            head->data = data;
  
            for (int i = 2; i <= n; i++) {
                newnode = malloc(sizeof(struct node));
                temp->next = newnode;
                printf("\nEnter number to"
                       " be inserted : ");
                scanf("%d", &data);
                newnode->data = data;
                temp = temp->next;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}
  
// Function to traverse the nexted list
void traverse()
{
    struct node* temp;
  
    // List is empty
    if (head == NULL)
        printf("\nList is empty\n");
  
    // Else print the LL
    else {
        temp = head;
        while (temp != NULL) {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}
  
// Function to insert at the front
// of the nexted list
void insertAtFront()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);
    temp->data = data;
  
    // Pointer of temp will be
    // assigned to head
    temp->next = head;
    head = temp;
}
  
// Function to insert at the end of
// the nexted list
void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));
  
    // Enter the number
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);
  
    // Changes nexts
    temp->next = 0;
    temp->data = data;
    head = head;
    while (head->next != NULL) {
        head = head->next;
    }
    head->next = temp;
}
  
// Function to insert at any specified
// position in the nexted list
void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
  
    // Enter the position and data
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);
  
    // Change nexts
    temp = head;
    newnode->data = data;
    newnode->next = 0;
    while (i < pos - 1) {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
  
// Function to delete from the front
// of the nexted list
void deleteFirst()
{
    struct node* temp;
    if (head == NULL)
        printf("\nList is empty\n");
    else {
        temp = head;
        head = head->next;
        free(temp);
    }
}
  
// Function to delete from the end
// of the nexted list
void deleteEnd()
{
    struct node *temp, *prevnode;
    if (head == NULL)
        printf("\nList is Empty\n");
    else {
        temp = head;
        while (temp->next != 0) {
            prevnode = temp;
            temp = temp->next;
        }
        free(temp);
        prevnode->next = 0;
    }
}
  
// Function to delete from any specified
// position from the nexted list
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
  
    // If LL is empty
    if (head == NULL)
        printf("\nList is empty\n");
  
    // Otherwise
    else {
        printf("\nEnter index : ");
  
        // Position to be deleted
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = head;
  
        // Traverse till position
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
  
        // Change nexts
        position = temp->next;
        temp->next = position->next;
  
        // Free memory
        free(position);
    }
}
  
// Function to find the maximum element
// in the nexted list
void maximum()
{
    int a[10];
    int i;
    struct node* temp;
  
    // If LL is empty
    if (head == NULL)
        printf("\nList is empty\n");
  
    // Otherwise
    else {
        temp = head;
        int max = temp->data;
  
        // Traverse LL and update the
        // maximum element
        while (temp != NULL) {
  
            // Update the maximum
            // element
            if (max < temp->data)
                max = temp->data;
            temp = temp->next;
        }
        printf("\nMaximum number "
               "is : %d ",
               max);
    }
}
  
// Function to find the mean of the
// elements in the nexted list
void mean()
{
    int a[10];
    int i;
    struct node* temp;
  
    // If LL is empty
    if (head == NULL)
        printf("\nList is empty\n");
  
    // Otherwise
    else {
        temp = head;
  
        // Stores the sum and count of
        // element in the LL
        int sum = 0, count = 0;
        float m;
  
        // Traverse the LL
        while (temp != NULL) {
  
            // Update the sum
            sum = sum + temp->data;
            temp = temp->next;
            count++;
        }
  
        // Find the mean
        m = sum / count;
  
        // Print the mean value
        printf("\nMean is %f ", m);
    }
}
  
// Function to sort the nexted list
// in ascending order
void sort()
{
    struct node* current = head;
    struct node* index = NULL;
    int temp;
  
    // If LL is empty
    if (head == NULL) {
        return;
    }
  
    // Else
    else {
  
        // Traverse the LL
        while (current != NULL) {
            index = current->next;
  
            // Traverse the LL nestedly
            // and find the minimum
            // element
            while (index != NULL) {
  
                // Swap with it the value
                // at current
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
  
            // Update the current
            current = current->next;
        }
    }
}
  
// Function to reverse the nexted list
void reverseLL()
{
    struct node *t1, *t2, *temp;
    t1 = t2 = NULL;
  
    // If LL is empty
    if (head == NULL)
        printf("List is empty\n");
  
    // Else
    else {
  
        // Traverse the LL
        while (head != NULL) {
  
            // reversing of points
            t2 = head->next;
            head->next = t1;
            t1 = head;
            head = t2;
        }
        head = t1;
  
        // New head Node
        temp = head;
  
        printf("Reversed nexted "
               "list is : ");
  
        // Print the LL
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
  
// Driver Code
int main()
{
    int choice;
    while (1) {
  
        printf("\n\t1  To see list\n");
        printf("\t2  For insertion at"
               " beginning\n");
        printf("\t3  For insertion at"
               " end\n");
        printf("\t4  For insertion at "
               "any position\n");
        printf("\t5  For deletion of "
               "first element\n");
        printf("\t6  For deletion of "
               "last element\n");
        printf("\t7  For deletion of "
               "element at any position\n");
        /*printf("\t8  To find maximum among"
               " the elements\n");
        printf("\t9  To find mean of "
               "the elements\n");
        printf("\t10 To sort element\n");
        printf("\t11 To reverse the "
               "nexted list\n");*/
        printf("\t8 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
  
        switch (choice) {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
        /*case 8:
            maximum();
            break;
        case 9:
            mean();
            break;
        case 10:
            sort();
            break;
        case 11:
            reverseLL();
            break;*/
        case 8:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}