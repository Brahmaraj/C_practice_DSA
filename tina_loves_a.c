// Tina has a string S. She really likes the letter a. She calls a string good if strictly more than half of the characters in that string are a's. For example "aaacb", "acaa" are good strings, and "baba", "abbba"," "(empty string) are not.
// Tina can erase some characters from her string 
// S. She would like to know what is the length of the longest string remaining after erasing some characters (possibly zero) to get a good string. It is guaranteed that the string has at least one a in it, so the answer always exists.

#include <stdio.h>
#include <string.h>

int main(){
    char a_str[] = "string";
    printf("%s\n",a_str);
    char new_str[20];
    gets(new_str);
    printf("%s",new_str);
    for(int i=0;new_str[i]!='\0';i++){
        printf("%c\n",new_str[i]);
    }
    int j;
    for(j=0;new_str[j]!='\0';j++){
    }
    printf("%d",j);
}