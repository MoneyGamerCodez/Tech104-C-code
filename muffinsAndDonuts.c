#include<stdio.h>

/*
The following program asks the user for an integer
Thomas Ratulowski
n01344514
*/
int main(void){
    int muffinQuantity;
    float muffinPrice;
    int donutQuantity;
    float donutPrice;
    float muffinSales;
    float donutSales;
    int productsSold;
    float collectedSales;

    printf("please enter the quantity of muffins: ");
    scanf("%d", &muffinQuantity);
    printf("Please enter the price per muffin: ");
    scanf("%f", &muffinPrice);
    printf("please enter the quantity of donuts: ");
    scanf("%d", &donutQuantity);
    printf("Please enter the price per donut: ");
    scanf("%f", &donutPrice);

    productsSold =  muffinQuantity + donutQuantity;
    muffinSales = muffinQuantity * muffinPrice;
    donutSales = donutQuantity * donutPrice;
    collectedSales = muffinSales+donutSales;

    printf("Muffin sales: %.2f\n",muffinSales);
    printf("Donut sales: %.2f\n", donutSales);

    printf("A total of %d items sold\n", productsSold);
    printf("%.2f was collected in sales\n", collectedSales);

    return 0;
}
