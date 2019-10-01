#include <stdio.h>
#include <stdlib.h>

int main(){
    char text[20];
    printf("please enter the answer as 20 consecutive letters:");
    scanf("%s",text);
    printf (" The letters entered were: %s \n",text);

    //changing the first 2 characters to the character *
    text[0]='*';
    text[1]='*';
    printf (" The modified letters  were: %s \n",text);

    //truncate
    text[10]='\0'; //   ‘\0’ is used to indicate where the string stops
    printf (" The modified cut words is: %s \n",text);

    return 0;
}