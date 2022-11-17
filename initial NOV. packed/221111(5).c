#include <stdio.h>
#include <string.h>

int f(char* s)
{
    int i, j;
    j = strlen(s);
    j--;
    for (i = 0; i < j && s[i] == s[j]; i++, j--);
    if (i >= j)
        return 1;
    return 0;
}
int main()
{
    char s[80];
    gets(s);
    if (f(s) == 1)
        printf("yes");
    else
        printf("no");
    return 0;
}