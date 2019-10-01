#include<stdio.h>

int main(void){
    int n, count, y;

    printf("Please enter a number: ");
    scanf("%d",&n);
    for(y=0;y<=n;y++){
        for(count = 0;count <= y; count++){
            printf("*");
        }
    printf("\n");
    }

    return 0;
}