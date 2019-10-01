#include<stdio.h>
#include<stdlib.h>

int main(){
    float centimeters = 0;
    float inchesToConvert = 2.54;
    float convertedMeasurement = 0;

    printf("Please enter the amount of inches you wish to convert: ");
    scanf("%f", &centimeters);
    convertedMeasurement = centimeters * inchesToConvert;
    printf("converted: %.2f inches", convertedMeasurement);

    system("pause");
    return 0;

}
