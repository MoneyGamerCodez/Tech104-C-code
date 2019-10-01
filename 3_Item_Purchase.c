#include<stdio.h>

int main(void){
    float item1, item2, item3, total, newTotal;
    float percentage = 0.15;
    printf("please enter the cost of the 3 items you're purchasing: ");
    scanf("%f %f %f",&item1,&item2,&item3);
    total = item1+item2+item3;
    newTotal = total -(total * percentage);

    if (total >= 300.00){
        printf("The discount you get is %.2f", newTotal);
    } else {
        printf("You owe %.2f",total);
    }
    return 0;

}
