#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num1 = 0;
    float num2 = 0;
    char num3;

    printf("Please enter a integer followed by a floating point number: \n");
    scanf("%d %lf", &num1, &num2);
    printf("Pleace give me the first character of you last name\n");
    scanf("%c", &num3);
    printf("The integer value is %d the floating point is %lf and the character is %c\n", num1, num2 ,num3);

    system("pause");
    return 0;

}
