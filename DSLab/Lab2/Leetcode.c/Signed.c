#include<stdio.h>
int reverse(int x){
   signed int sum=0;
    if((x>=-(2^31))&&(x<=(2^31)-1))
    {
    sum=sum*10+(x%10);
    x=x/10;
}
printf("Revesed num:%d",sum);
}
void main()
{
    int n;
    printf("Enter any number");
    scanf("%d",&n);
    reverse(n);
   // printf("Reversed number:%d",n);
}