#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char str1[20];
	char str2[20];
	int maxlen = 0;
	scanf("%s %s %d", str1, str2, &maxlen);
	int n = strncmp(str1, str2, maxlen);
	switch (n) {
	case 0:printf("\"%s\" is equal to \"%s\" up to %d characters\n", str1, str2, maxlen);
		break;
	case 1:printf("\"%s\" is greater than \"%s\" up to %d characters\n", str1, str2, maxlen);
		break;
	case -1:printf("\"%s\" is less than \"%s\" up to %d characters\n", str1, str2, maxlen);
		break;
	}
	return 0;
}