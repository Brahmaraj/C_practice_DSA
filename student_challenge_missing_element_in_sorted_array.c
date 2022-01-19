#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[] = {1,2,3,4,5,7,8,9,10};
    int l = 1;
    int h = 10;
    int size=9;
    int sum = h*(h+1)/2;
    int arr_sum = 0;
    for(int i=0;i<size;i++){
        arr_sum += array [i];
    }
    printf("Missing no is :%d\n",(sum-arr_sum));
    return 0;
}