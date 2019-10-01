#include<stdio.h>
#include<string.h>

int main(void){
    char word[20];
    int count = 0;

    printf("please enter a word: ");
    scanf("%s",word);

    while(word[count]!='\0'){
        printf("%c         ",word[count]);
        count= count+1;
    }
    return 0;
}