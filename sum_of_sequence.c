//given a postive integer recursive function and sum all no. till N reachers 1
//if n is even n = n/2;
//if n is odd n = 3*n + 1;
#include <stdio.h>

int recursiveSum(long long num,long long sum){
    int i;
    sum+=num;
    if(num%2==0 && num>=1){
        i = num/2;
        sum = recursiveSum(i,sum);
    }
    else if(num>1){
        i = (3*num)+1;
        sum = recursiveSum(i,sum);
    }
    return sum;
}

int main(){
    long long sum=0;
    int n;
    long long num;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&num);
        printf("%lld\n",recursiveSum(num,sum));
        sum=0;
    }
}
