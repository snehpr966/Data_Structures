#include<stdio.h>
numberOfSteps(int num);
int main(){
    int n;
    printf("Enter a num");
    scanf("%d",&n);
    numberOfSteps(n);
}
int numberOfSteps(int num){
    int i=0;
while(num!=0){
    if(num%2==0){
    num=num/2;
    }
    else{
        num=num-1;
    }i++;
}
return i;
//printf("No. of steps required is %d",i);
}
