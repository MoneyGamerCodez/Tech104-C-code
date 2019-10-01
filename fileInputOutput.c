#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE * in = fopen("bankStatement.txt", "w");
    float deposit;

    printf("Please enter the amount deposited:");
    scanf("%f", &deposit);

    if(deposit > 5000.00){
        fprintf(in,"The amount needed to pay in interest is %.2f",deposit*0.04);
    } else if (deposit >= 5000.00 && deposit < 10000.00){
        fprintf(in,"The amount needed to pay in interest is %.2f",deposit*0.05);
    } else if (deposit >= 100000.00 && deposit < 20000.00){
        fprintf(in,"The amount needed to pay in interest is %.2f",deposit*0.06);
    } else if (deposit > 50000.00 ){
        fprintf(in,"The amount needed to pay in interest is %.2f",deposit*0.07);
    } 

    fclose(in);

    return 0;
}