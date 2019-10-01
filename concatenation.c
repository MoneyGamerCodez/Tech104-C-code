#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    char fname[40];
    char lname[20];

    printf("please enter your first name :");
    scanf("%s",fname);
    printf("please enter your last name :");
    scanf("%s",lname);

    // adding the two strings together
    strcat(fname,lname);
    printf ("words added together : %s \n",fname);


    printf("please enter another first name :");
    scanf("%s",fname);
    printf("please enter another last name :");
    scanf("%s",lname);

    // adding the two strings together
    strcat(fname," ");
    strcat(fname,lname);
    printf ("words added together : %s \n",fname);

return 0;
}