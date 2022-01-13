//Given Number N print all even numbers (>0) from 1 to N using Recursion
#include <stdio.h>

void rangeEven(int n,int i){
    if(i<=n){
        printf("%d ",i);
        rangeEven(n,i+2);
    };
}

int main(){
    int n;
    int num;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&num);
        rangeEven(num,2);
    }
}