#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num1;
    float num2;
    char ch1;

    printf("Please enter a integer followed by a floating point number: \n");
    scanf("%d %f", &num1, &num2);
    printf("Pleace give me the first character of you last name\n");
    scanf(" %c", &ch1);
    printf("The integer value is %d the floating point is %f and the character is %c\n", num1, num2 ,ch1);

    system("pause");
    return 0;

}
