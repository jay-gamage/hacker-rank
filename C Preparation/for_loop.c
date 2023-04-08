// For each integer n in the interval [a,b]:
// If 1<= n<=9, print the English representation of it in lowercase.
// Else if n>9 and it is an even  number, then print “even”.
// Else if n>9 and it is an odd number, then print “odd”.


#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char strNum[9][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // Remember to allocate space for the null character '\0' in string length, hence the usage of 6
      
    for(int n=a; n<=b; n++){
        if(n>=1 && n<=9)
            printf("%s\n", strNum[n-1]);
        else{
            if((n%2) == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }
    return 0;
}
