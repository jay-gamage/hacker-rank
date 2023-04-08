// The program prints “Hello, World!” on a single line, and then prints the provided input string to stdout

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n%s\n", s);
    return 0;
}
