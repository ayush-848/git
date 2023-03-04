#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    printf("\n numbers before swapping a=%d & b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n numbers after swapping a=%d & b=%d \n",a,b);
}