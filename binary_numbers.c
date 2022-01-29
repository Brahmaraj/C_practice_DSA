// Problem Statement
// Ninja is studying binary numbers and he likes binary numbers with maximum length.
// He is having an array ‘A’ containing ‘N’ positive integers. He multiplies all the array elements and finds the maximum length binary number which is not greater than this product.
// Can you tell the maximum length Ninja calculated.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int no_of_elements=0, *elements=NULL,prod=1,cmp=1,count=0;
        scanf("%d",&no_of_elements);
        elements = (int *)malloc(no_of_elements*sizeof(int));
        for(int i=0;i<no_of_elements;i++){
            scanf("%d",&elements[i]);
        }
        for(int j=0;j<no_of_elements;j++){
            prod = prod * elements[j];
        }
        while(prod>=cmp){
            cmp = 2*cmp;
            count++;
        }
        printf("%d\n",count);
    }
}