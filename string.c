//Print the index of First Capital Letter from the given string
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 10000

int firstCapital(char *str,int i){
  //printf("%c",str[0]);
  if(i<strlen(str)){
    if(str[i]>='A' && str[i]<='Z')
      return i;
    else {
      int j = ++i;
      return firstCapital(str,j);
    }
  }
  return -1;
}

int main()
{
  int n;
  char s[MAX_SIZE];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%s",&s);
    printf("%d\n",firstCapital(s,0));
  }
  return 0;
}