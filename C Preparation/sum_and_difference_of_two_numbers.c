// The program takes two numbers of int data type, two numbers of float data type as input and outputs their sum.

#include <stdio.h>

int main()
{
    int n1, n2;
    float n3, n4;

    scanf("%d %d", &n1, &n2);
    scanf("%f %f", &n3, &n4);
    
    printf("%d %d\n", n1+n2, n1-n2);
    printf("%.1f %.1f\n", n3+n4, n3-n4);    // %.1f prints float to 1dp
    
    return 0;
}
