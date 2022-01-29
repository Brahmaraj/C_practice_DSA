#include <stdio.h>
#include <stdlib.h>

int main(){
    int iter;
    scanf("%d",&iter);
    while (iter--)
    {
        int count=0,n=1,numbers,prod=1, *arr;
        scanf("%d",&numbers);
        arr = (int *)malloc(numbers * sizeof(int));
        for(int i=0;i<numbers;i++){
            scanf("%d",arr[i]);
        }
        for(int i=0;i<numbers;i++){
            prod = prod * arr[i];
        }
        while(prod>=n){
            n = n*2;
            count++;
        }
        printf("%d",count);
    }
    

    
}