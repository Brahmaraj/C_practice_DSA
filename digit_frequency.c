#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);  
    char cmp[10]={'0','1','2','3','4','5','6','7','8','9'} ;
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j]==cmp[i])
            {
                count += 1;
            }
            
        }
        printf("%d ",count);
        
    }
}
    