#include<stdio.h>
int main() {
    char s[11], i;
    for (i = 0; i < 10; i++)
        if ((s[i] = getchar()) == '.')
            break;
    for (i--; i >= 0; printf("%c", s[i--]));
    printf("\n");
    return 0;
}