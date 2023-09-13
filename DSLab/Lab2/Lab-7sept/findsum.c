#include <stdio.h>
int findSum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
        if(((a[i]/10)%10)%5==0){
         sum=sum+a[i];
                 }
    return sum;
    }
    int main()
    {
        int a[]={25,52,352,50};
        int n=sizeof(a)/sizeof(a[0]);
        printf("%d",findSum(a,n));
        return 0;
    }
}