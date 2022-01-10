//practice struct

#include<stdio.h>
void display (char *, char *,int);
int main (){
    struct book
    {
       char name[25];
       char author[25];
       int callnol;    
    };
    struct book b1 = {"Let us C", "YPK", 101};
    display(b1.name, b1.author, b1.callnol);
    return 0;
}

void display (char s[], char t[], int n){
    printf("%s %s %d",s,t,n);
}
