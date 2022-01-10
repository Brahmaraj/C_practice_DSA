#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int h,v,len,diff;
    char str[100];
    scanf("%d %d",&h,&v);
    if(h>v){
        strcpy(str, "0");
        len = v;
        for(int i=0;i<=len;i++){
            strcat(str, "10");
        }
        diff = abs(h-v);
        if(diff>1){
            for(int i=1;i<diff;i++){
                strcat(str, "010");
            }
        }
    }
    else
    {
        strcpy(str, "1");
        len = h;
        for(int i=0;i<=len;i++){
            strcat(str, "01");
        }
        diff = abs(h-v);
        if(diff>1){
            for(int i=1;i<diff;i++){
                strcat(str, "101");
            }
        }
    }
    printf("Hill is 1 and Valley is 0\n");
    printf("%s",str);
    return 0;
}                                                                                                 