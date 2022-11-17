#include<stdio.h>
#include<string.h>
int main() {
    char str[6][255] = { 0 };
    for (int i = 0; i < 6; i++) {
        scanf("%s", str[i]);
    }
    char temp[255] = { 0 };
    for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 6 - 1 - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        printf("%s\n", str[i]);
    }
}