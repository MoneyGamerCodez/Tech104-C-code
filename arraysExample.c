#include<stdio.h>

int main(){
    // using static to fill the array with 0's
    static int list[5];
    int count = 0;
    // fill the array with numbers that the user puts in
    for(count= 0; count <= 5; count++){
        printf("please enter a number: ");
        scanf("%d",&list[count]);
    } // print what was placed in in reverse
    for(count = 5; count >= 0; count--){
        printf("%d",list[count]);
    }

    return 0;
}