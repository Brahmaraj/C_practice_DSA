// In an examination hall, seat number started from 0 then 1,2,3,.... and so on. English paper and Hindi paper students sitting on alternate seats with English paper students starting from seat 0, then Hindi paper student from seat 1 and so on. 
//No two students with the same paper will sit together. There are N seats in a single row. Help the examiner to find the roll number of only English paper students in a particular row.
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