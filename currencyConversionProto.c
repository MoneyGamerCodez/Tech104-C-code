#include<stdio.h>
#include<stdlib.h>

int main(){
    float exchangeRate = 1.32;
    float amountToConvert = 0;
    float convertedTotal = 0;

    printf("Thank you for using TzR Currency Converter\nPlease enter the amount you wish to convert:\n");
    scanf("%f", &amountToConvert);
    convertedTotal = amountToConvert * exchangeRate;
    printf("%.2f USD is valued at %.2f CAN\n", amountToConvert, convertedTotal);

    system("pause");
    return 0;
}
