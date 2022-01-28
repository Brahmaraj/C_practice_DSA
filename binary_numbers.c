#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,bin_num;
    int count=0;
    n=1;
    scanf("%d",&bin_num);
    while(bin_num>=n){
        n = n*2;
        count++;
    }
    printf("%d",count);
}