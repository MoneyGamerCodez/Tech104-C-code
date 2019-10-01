#include<stdio.h>
#include<string.h>

int main(void){
    char word[20];
    int count = 0;

    printf("please enter a word: ");
    scanf("%s",word);

    while(word[count]!='\0'){
        if(word[count]!= 'a' && word[count]!= 'i' && word[count]!= 'o' && word[count]!= 'e' && word[count]!= 'i' && word[count]!= 'u'){
            printf(" %c",word[count]);
        } else {
            printf(" ");
        }
        count= count +1;
    }
    return 0;
}