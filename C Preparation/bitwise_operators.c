// Given an integer n, and a threshold k. For each number I from 1 through n, the program finds the maximum
// value of the logical and, or and xor when compared against all integers through n that are greater than i.
// A value is only considered if the comparison returns a result less than k.

#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int tmpAnd=0, tmpOr=0, tmpXor=0;
    int maxAnd=0, maxOr=0, maxXor=0;
    
    for(int a=1; a<n; a++){
        for(int b=2; b<=n; b++){
            if(a==b)    continue;
            tmpAnd = a&b;
            tmpOr = a|b;
            tmpXor = a^b;
            
            if(tmpAnd<k && tmpAnd>maxAnd)   maxAnd=tmpAnd;
            if(tmpOr<k && tmpOr>maxOr)  maxOr=tmpOr;
            if(tmpXor<k && tmpXor>maxXor)   maxXor=tmpXor;
        }
    }
    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
