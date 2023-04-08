// The program receives the value of two integers, a and b, then sets the value of a to their sum and b to their absolute difference.

#include <stdio.h>
#include <stdlib.h>             // stdlib.h must be included to use abs

void update(int *a, int *b) {
       int temp = *a;           // store value of a in temp variable
       *a += (*b);
       *b = abs(temp-(*b));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
