#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *arr;
    int size;
};

int missingOneElement(struct Array array){
    int high = array.arr[array.size-1];
    int acutal_sum = high*(high+1)/2;
    int arr_sum = 0;
    for(int i=0;i<array.size;i++){
        arr_sum += array.arr[i];
    }
    return (acutal_sum - arr_sum);
}

void missingMultipleElements(struct Array array){
    int diff = array.arr[0];//subtracting first index with first element that diff is our first element
    for(int i=0;i<array.size;i++){
        while( diff < (array.arr[i]-i)){
            printf("Element: %d\n",diff+i);
            diff++;
        }
    }
}

int main(){
    struct Array array;
    printf("Enter array size\n");
    scanf("%d",&array.size);
    array.arr = (int *)malloc(array.size*sizeof(int));
    for(int i=0;i<array.size;i++){
        scanf("%d",&array.arr[i]);
    }
    
    // printf("Missing no is :%d\n",missingOneElement(array));
    printf("Missing Elements \n");
    missingMultipleElements(array);
    return 0;
}
