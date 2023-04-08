// The program generates the sum of digits of a five digit number

#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int sumOfDigits = 0;
    for(int i=0; i<5; i++){
        sumOfDigits += n%10;
        n /= 10;
    }
    printf("%d\n", sumOfDigits);

    return 0;
}
