#include<stdio.h>
/*
Product Discounter
*/
int main(void){
	/* Variables */
	float price;
	int productCode, lastDigit;
	float productDiscounted;

	// Ask the user to input their item code plus the price
	printf("Greetings\nPlease enter the item code and price (a space between the code and the price):");
	scanf("%d %f",&productCode, &price);
	
	//gets the last digit of the item code to match a discount to it
	lastDigit = (productCode % 10);
	
	// Take the last digit and compare it to its cases
	switch(lastDigit)
	{
		case 4:
			productDiscounted = price - (price * 0.10);
			printf("The item has a discount of 10 percent, so your new total is $%.2f\n",productDiscounted);
			break;
		case 3:
			productDiscounted = price - (price * 0.08);
			printf("The item has a discount of 8 percent, so your new total is $%.2f\n",productDiscounted);
			break;
		case 2:
			productDiscounted = price - (price * 0.06);
			printf("The item has a discount of 6 percent, so your new total is $%.2f\n",productDiscounted);
			break;
		case 1:
			productDiscounted = price - (price * 0.04);
			printf("The item has a discount of 4 percent, so your new total is $%.2f\n",productDiscounted);
			break;

			// multiple cases can be placed on the same line if they are gonna use the same piece of code
		case 0: case 5: case 6: case 7: case 8: case 9:
			printf("There is no discount allocated to the item being purchased, your total is: $%.2f\n",price);
			break;
	}// end of program(duh)
	return 0;
}
