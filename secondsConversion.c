#include<stdio.h>
/*
Converts a bunch ofseconds to the respected hours minutes and seconds.
*/
int main()

{   // variables- they make containers for stuffs
	int hour, minutes, elapsedSec, elapsedMin, elapsedHour;
	int hours2, minutes2;
	int firstTimeInSec,secondTimeInSec;

    //ask the user for the first time and store it in a box, one for hour, the other, minutes
	printf("Please give me the time in 24hr notation(hours and minutes seperated by space): ");
	scanf("%d %d",&hour, &minutes);

    // same thing as the comment above with the 2 lines of code below it 
	printf("Please Give me a second time: ");
	scanf("%d %d",&hours2,&minutes2);

    // convert times to seconds for easy addition and subtraction
	firstTimeInSec = (hour * 3600) + (minutes * 60);
	secondTimeInSec = (hours2 * 3600) + (minutes * 60);

    //do the subtraction accordingly
	if (firstTimeInSec < secondTimeInSec){
		elapsedSec = secondTimeInSec - firstTimeInSec;
	} else {
		elapsedSec = 86400-(firstTimeInSec - secondTimeInSec);
	}

    //convert back to hours and minutes
	elapsedHour = elapsedSec / 3600;
	elapsedSec = elapsedSec % 3600;
	elapsedMin = elapsedSec / 60;

    // tell the user how time they wasted and won't be getting back (unless they're getting paid for it)
	printf("Time elapsed: %d hours and %d minutes\n", elapsedHour,elapsedMin);

    // end of the program (self explanatory)
    return 0;
}
