#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int next_term,counter=3;
int find_nth_term(int n, int a, int b, int c) {
    next_term=a+b+c;
    counter+=1;
    if (counter==n) {
        return next_term;
    }
    else {
    a=b;
    b=c;
    c=next_term;
    find_nth_term(n, a,  b, c);
    }
    
  
}

int main() {    
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}