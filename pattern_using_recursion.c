// PBMentor believes recursion is very very important concept, hence she wants you to practice recursion properly. Let us start practicing //recursion with a simple problem. You have to print a pattern using recursion. Given a input 
// N  the pattern looks like this N ,a(i) ,a(i) + 1 ,a(i) + 2 ,....., N . Where if a(i) > 0 then a(i) + 1 = a(i) - 5 else a(i) + 1 = a(i) + 5 . It will be a decreasing sequence from N till a(i)<= 0 and then an increasing sequence till  N.
#include <stdio.h>
#include <stdbool.h>
int num;
int flag = true;
int count = 0;
int recursivePattern(int N){
   printf("%d ",N);
    if(N>0 && flag){
        count--;
        recursivePattern(N-5);
    }
    else if(count<0){
        count++;
        flag = false;
        recursivePattern(N+5);
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        recursivePattern(num);
        count = 0;
        flag = true;
        printf("\n");
    }
}