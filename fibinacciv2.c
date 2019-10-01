#include<stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fib(n-1) + fib(n-2));
}

int main(){
    int num1, num2,x;
    printf("please enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);

    for(x=num1;x<=num2;x++){
        printf("fib\(%d\)= %ul\n",x,fib(x));
    }
    return 0;
}
