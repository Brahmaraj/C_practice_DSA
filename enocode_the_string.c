#include <stdio.h>
#include <stdlib.h>

struct CharArray {
    char *s;
    int lenght;
};

int main(){
    int n;
    struct CharArray str_arr;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&str_arr.lenght);
        str_arr.s = (char *)malloc(str_arr.lenght * sizeof(char));
        for(int i=0;i<=str_arr.lenght;i++){
            scanf("%c",&str_arr.s[i]);
        }
        for(int i=0;i<=str_arr.lenght;i++){
            printf("%c",str_arr.s[i]);
        }
        for(int i=0;i<=str_arr.lenght;i++){
            if(str_arr.s[i] == 'a' || str_arr.s[i] == 'e' || str_arr.s[i] == 'i' || str_arr.s[i] == 'o' || str_arr.s[i] == 'u')
            str_arr.s[i]++;
            else if(str_arr.s[i]=='z')
            str_arr.s[i]=97;
            else
            str_arr.s[i]--;
        }
        for(int i=0;i<=str_arr.lenght;i++){
            printf("%c",str_arr.s[i]);
        }
        printf("\n");
        free(str_arr.s);
    }
}

