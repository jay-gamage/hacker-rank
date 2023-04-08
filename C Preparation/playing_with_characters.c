// The program takes a character, string and sentence and outputs these in each line in order

#include <stdio.h>

int main()
{
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("\n");                // Used to prevent the next statement from reading a
    scanf("%[^\n]%*c", &sen);   // newline character, \n, from the previous line
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}
