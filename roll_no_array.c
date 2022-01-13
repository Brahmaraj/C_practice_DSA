#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *A;
    int tot_students;
};

void displayRoll(struct Array array){
    for(int i=0;i<array.tot_students;i=i+2){
        printf("%d ",array.A[i]);
    }
    printf("\n");
}

int main(){
    int n;
    struct Array arr;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&arr.tot_students);
        arr.A = (int *)malloc(arr.tot_students*sizeof(int));
        for(int i=0;i<arr.tot_students;i++){
            scanf("%d",&arr.A[i]);
        }
        displayRoll(arr);
    }
}