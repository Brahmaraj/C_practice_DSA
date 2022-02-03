// We all know Chatur and Rancho from 3 idiots. Rancho got Chatur exam paper, 
// but since he is a prankster, he decided to meddle with the words present in the paper. 
// He changes all the words in the paper into palindromes.To do this, 
// he follows two rules:
// 1. In one operation he can only reduce the value of an alphabet by 1, i.e he can change d to c, but he cannot change c to d or d to b.
// 2. The alphabet a will not be reduced any further. Each reduction in the value of any alphabet is counted as a single operation.
// Find the minimum number of operations required to convert a given string into a palindrome.

#include <stdio.h>
#include <string.h>

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        char s[10000000];
        scanf("%s", s);
        int count=0;
        for(int i=0,j=strlen(s) ; i<strlen(s)/2 ; i++,j--){
            if(s[i]==s[j])  
                count++;
            else {
                while(s[i]<s[j])
                    count++;
            }
        }
        printf("%d",count);
        return 0;
    }
}