// Given a positive integer denoting in, the program performs the following:
// If 1 <= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
// If n > 9, printer Greater than 9.

#include <stdio.h>

int main()
{
    int n = 5;
    // Create array of 9 strings of length 6 char
        // Note that the null character '\0' must be
        // considered when defining length of string
    char strArray[9][6] = {"one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    if(1<=n && n<=9){
    printf("%s", strArray[n-1]);
    }
    else
        printf("Greater than 9"); 
    return 0;
}
