//given an array of length n find maximum length of unique array A where A =(a[i],a[a[i]],a[a[a[i]]],....)
//till a dublicate element is reached

#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *arr;
    int length;
};

int countUniqe(struct Array old_array){
    struct Array new_array;
    new_array.length = old_array.length;
    new_array.arr[0] = old_array.arr[0];
    int j=0,k=1;
    for(int i=0;i<old_array.length;i++){
        int j = old_array.arr[j];
        new_array.arr[i]=old_array.arr[j];
        for(int i=0;i<k;i++){
            if(new_array.arr[i]==new_array.arr[k])
                return k;
            k++;
        }
    }
    return old_array.length;
};

int main(){
    int n;
    struct Array old_array;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&old_array.length);
        old_array.arr = (int *)malloc(old_array.length*sizeof(int));
        for(int i=0;i<old_array.length;i++){
            scanf("%d",&old_array.arr[i]);
        }
        printf("%d\n",countUniqe(old_array));
    }
}