// Tina has a string S. She really likes the letter a. She calls a string good if strictly more than half of the characters in that string are a's. For example "aaacb", "acaa" are good strings, and "baba", "abbba"," "(empty string) are not.
// Tina can erase some characters from her string 
// S. She would like to know what is the length of the longest string remaining after erasing some characters (possibly zero) to get a good string. It is guaranteed that the string has at least one a in it, so the answer always exists.

#include <stdio.h>
#include<string.h>
int main()
{
  int test;
  scanf("%d", &test);
  while(test--){
    char s[10000000];
    scanf("%s", &s);
    int count=0;
    for(int i=0; i<strlen(s); i++)
        if(s[i]=='a')
            count++;
    if(count > strlen(s)/2)
      printf("%d\n",strlen(s));
    else{
      printf("%d\n",(count-1)*2 + 1);
    }
  }
}