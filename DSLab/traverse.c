#include<stdio.h>
void printArray(int *arr,int n)
{
    int i;
    printf("Array:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={2,8,5,-2,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    return 0;
}
