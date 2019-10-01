#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
The following program tests for a user logging into a system, it only tests for
the user curently
*/
int main(){
    /*
    Variables up top which specifies the user that is able to connect
    */
    char pcName[] = "Thomas";
    //The array so the user can input there account name
    char userInput[10];
    //A welcome/prompt
    printf("Greetings, Please give me the username associated with this PC: \n");
    scanf("%s",&userInput);
    /*
    tests to see if the user's input matches to whats stored
    by using the strcmp (String Compare), because strings in C are
    considered an array. Therefore you need to compare each and every character
    in the string array
    */
    if (strcmp(userInput, pcName)== 0){ // if it matches, welcome the user
        printf("Welcome back %s!\n",&pcName);
    } else{
         printf("Username not valid\n"); //anything else tell them its not valid
    }
    //stdlib.h has the system pause
    system("pause");
    return 0;
}
