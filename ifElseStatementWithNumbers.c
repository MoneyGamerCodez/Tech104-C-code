#include<stdio.h>
#include<stdlib.h>
/*
The following program asks the user for an integer
*/
int main(){
    int pcNumber = 100;
    int userNumber;

    /*
    Prompt the user for an integer/whole number that will be compared to 100
    */
    printf("Please give me an integer to compare to 100: \n");
    scanf("%d", &userNumber);

    if (pcNumber > userNumber){ // the number is smaller than 100
        printf("Your number is smaller than 100 \n");
    } else if (pcNumber == userNumber){
         printf("You typed in 100 \n");//they typed in 100
    } else{// for anything higher
        printf("Your number is bigger than 100 \n");
    }
    //stdlib.h has the system pause
    system("pause");
    return 0;
}
