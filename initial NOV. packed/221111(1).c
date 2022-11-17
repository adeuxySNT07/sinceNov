#include<stdio.h>
#include<string.h>
int main() {
	char str1[100];
	char str2[100];
		scanf("%s", str1);
		scanf("%s", str2);
		int a = strcmp(str1, str2);
		switch(a) {
		case 1:printf("Result:%s > %s",str1,str2); break;
		case 0:printf("Result:%s = %s",str1,str2); break;
		case -1:printf("Result:%s < %s",str1,str2); break;
		}
}