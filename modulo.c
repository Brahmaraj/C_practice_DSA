#include <stdio.h>
#include <math.h>


int main() {
	
    int sum,n;
    scanf("%d", &n);
    while(n>0){
        sum+= n%10;
        n=n/10;
    }
    printf("%s",sum);
    return 0;
}