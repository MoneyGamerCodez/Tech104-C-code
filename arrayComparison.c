#include<stdio.h>

int main(){
    int arr[]={2,7,1,18,3,5,6,8,2,3};
    int arr2[]={7,2,2,5,99,81};
    int x = 0;
    int size = 10, size2 = 6;

    while(arr[x] != 0 || arr2[x] != 0){
        if(arr[x] == arr2[x]){
            printf("%d",arr[x]);
        } else {
            printf("0");
        }
        x++;
    }


    return 0;
}