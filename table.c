#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int a, i=0,temp;
    scanf("%d",&a);
    for(i=0;i<11;i++){
        temp=a*i;
        printf("%dx%d=%d\n",a,i,temp);
    }
    return 0;
}