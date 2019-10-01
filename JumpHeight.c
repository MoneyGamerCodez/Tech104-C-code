#include<stdio.h>
#include<stdlib.h>

/*
This code is designed to grab the jumpers height and tell you the highest jumper
*/

//declaration of functions (All functions are written after the main)
double averageHeight(double h1, double h2, double h3);

// main function
int main(void){
    // declaring variables(AKA storage boxes with labels on them)
    int jumper = 1;
    double height1, height2, height3, averageJump;

    // the while loop, to keep putting input till a condition is false
    while(jumper != 0){
        // ask the user to input the jumper's number
        printf("Please enter the jumper's number(0 to quit): ");
        // capture the users input
        scanf("%d",&jumper);

        // stop the while loop when the user enters 0
        if(jumper ==0){
            break;
        }

        // asks the user to input the three jumps
        printf("please enter the jumpers 3 jump heights: ");
        // captures the three jumps
        scanf(" %lf %lf %lf",&height1,&height2,&height3);

        // grab the 3 heights, send through a function to get the average
        averageJump = averageHeight(height1,height2,height3);

        // tell the user that the jumper has qualified
        if(averageJump >= 1.5){
            printf("%d\t%.2lf\tQualififed\n",jumper,averageJump);
        } else { // tell the user the jumper did not qualify
            printf("%d\t%.2lf\tDoes not qualify\n",jumper,averageJump);
        }

    }// end of the while loop

    return 0;
}// end of the main code

// the averageHeight Function
double averageHeight(double h1, double h2, double h3){

    //delcare a new variable to hold the new calculated jump
    double jump;

    // do the math
    jump = (h1 + h2 + h3)/3;

    // return the result
    return jump;
}
