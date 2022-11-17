#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int justify(int a,int b) {
	if (b % a == 0) {
		return 1;
	}
	else return 0;
}
void main() {
	int a, b, c, d, e, f;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	if (justify(a, b) == 1) {
		printf("%d is a multiple of %d\n", b, a);
	}
	else printf("%d is not a multiple of %d\n", b, a);
	
	if (justify(c, d) == 1) {
		printf("%d is a multiple of %d\n", d, c);
	}
	else printf("%d is not a multiple of %d\n", d, c);
	
	if (justify(e, f) == 1) {
		printf("%d is a multiple of %d\n", f, e);
	}
	else printf("%d is not a multiple of %d\n", f, e);
	
}