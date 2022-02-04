// We all know Chatur and Rancho from 3 idiots. Rancho got Chatur exam paper, 
// but since he is a prankster, he decided to meddle with the words present in the paper. 
// He changes all the words in the paper into palindromes.To do this, 
// he follows two rules:
// 1. In one operation he can only reduce the value of an alphabet by 1, i.e he can change d to c, but he cannot change c to d or d to b.
// 2. The alphabet a will not be reduced any further. Each reduction in the value of any alphabet is counted as a single operation.
// Find the minimum number of operations required to convert a given string into a palindrome.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 10000000
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        //char s[10000000];
        char s[30];
        scanf("%s",&s);
        int n = strlen(s);
        printf("%d\n",n);
        bool palindrome = true;
        for(int i=0,j=n-1;i<n/2;i++,j--){
            if(s[i]!=s[j]){
                palindrome = false;
            }
        }
        if(palindrome)
            printf("Plaindrome\n");
        else
            printf("Not a plaindrome\n");  
    }
    return 0;
}