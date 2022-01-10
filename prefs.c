#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char l,m,a,b,c;
    scanf("%c %c %c %c %c",&a,&b,&c,&l,&m);
    if(l==a || m==a){
        printf("First Pref : ");
        printf("%c",a);
    }
    else if(m==b || l==b){
        printf("First Pref : ");
        printf("%c",b);
    }
    else
    {
        printf("First Pref : ");
        printf("%c",c);
    }
    return 0;
}