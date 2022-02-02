// Tina has a string S. She really likes the letter a. She calls a string good if strictly more than half of the characters in that string are a's. For example "aaacb", "acaa" are good strings, and "baba", "abbba"," "(empty string) are not.
// Tina can erase some characters from her string 
// S. She would like to know what is the length of the longest string remaining after erasing some characters (possibly zero) to get a good string. It is guaranteed that the string has at least one a in it, so the answer always exists.

#include <stdio.h>
#include <string.h>

// int main(){
//     char a_str[] = "string";
//     printf("%s\n",a_str);
//     char *new_str;
//     gets(new_str);
//     printf("%s",new_str);
//     for(int i=0;new_str[i]!='\0';i++){
//         printf("%c\n",new_str[i]);
//     }
//     int j;
//     for(j=0;new_str[j]!='\0';j++){
//     }
//     printf("%d",j);
// }

int main(){
    int n;
    scanf("%d\n",&n);
    char *new_str;
    while (n--)
    {
        int count=0,count_a=0;
        gets(new_str);
        printf("%s",new_str);
        for(int i=0;new_str[i]!='\0';i++){
            if(new_str[i]=='a')
                count_a++;
            count++;
        }
        if(count_a>count/2)
            printf("\n%d\n",count);
        else
            printf("\n%d\n",(count_a+(count_a-1)));
        free(new_str);
    }
    
}