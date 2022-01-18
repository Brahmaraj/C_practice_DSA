//given an array of length n find maximum length of unique array A where A =(a[i],a[a[i]],a[a[a[i]]],....)
//till a dublicate element is reached

#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *arr;
    long long length;
};

int countUniqe(struct Array old_array){
    struct Array new_array;
    new_array.length = 1;
    new_array.arr[0] = old_array.arr[0];
    int j,i;
    for(i=1;i<old_array.length;i++){
        new_array.arr[i]=old_array.arr[(new_array.arr[i-1])];
        new_array.length++;
        for(j=0;j<new_array.length;j++){
            if(new_array.arr[j]==new_array.arr[new_array.length])
                return new_array.length;
        }
    }
    return new_array.length;
};

int main(){
    int n;
    struct Array old_array;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&old_array.length);
        old_array.arr = (int *)malloc(old_array.length*sizeof(int));
        for(int i=0;i<old_array.length;i++){
            scanf("%d",&old_array.arr[i]);
        }
        printf("%d\n",countUniqe(old_array));
        free(old_array.arr);
    }
}