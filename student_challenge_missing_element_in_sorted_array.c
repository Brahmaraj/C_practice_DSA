#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void missingElementsHash(struct Array array,int start,int end){
    struct Array hash;
    hash.size = end;
    hash.arr = (int *)malloc(hash.size*sizeof(int));
    hash.arr[end] = {0};
    for(int i=0;i<hash.size;i++){
        printf("%d ",hash.arr[i]);
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
    missingElementsHash(array,1,12);
    //missingMultipleElements(array);
    return 0;
}
