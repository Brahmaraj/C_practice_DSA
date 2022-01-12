//Given an integer N, recursively find the multiplication of digits of N modulus with 10^9 + 7.
#include <stdio.h>

long long mod = 1e9 + 7;

int recursiveMultiply(long long n,long long mod){
    if(n<=0)
        return 1;
    return (((n%10)%mod)*(recursiveMultiply(n/10,mod)%mod))%mod;
}

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        long long num;
        scanf("%lld",&num);
        printf("%d\n",recursiveMultiply(num,mod));
    }
    return 0;
}