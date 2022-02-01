#include <stdio.h>
#include <stdlib.h>

int main(){
    char A[] = "finding";
    int H=0,x=0;
    for(int i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97); // shifting x to the same value as x so the we can use it to mask or merge
        if((x&H)>0) // masking is carried on (checking if the value is already present or not i.e merged)
        printf("%c is duplicate\n",A[i]);
        else
            H=x|H; // if the value is not present then value is merged 
    }
    int y =5;
    y = y<<1;  //left shift to multiply
    printf("%d\n",y);
    y =y>>1; //right shift to divide
    printf("%d\n",y);
}