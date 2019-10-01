/*
Name: Thomas Ratulowski
Student Number: n01344514
Date: January 19, 2019
*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	float average = 0;

	printf("Please enter an integer: \n");
	scanf("%d", &number1);
	printf("Please enter another integer: \n");
	scanf("%d", &number2);
	printf("Please give me one last number: \n");
	scanf("%d", &number3);
	average = (number1 + number2 + number3) / 3;
	printf("Your average is %f\n", average);

	system("pause");
	return 0;
}
