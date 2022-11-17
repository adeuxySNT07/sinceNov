#include<stdio.h>
#include<math.h>

int Least_Common_Multiple(int a, int b);
void main() {
	int a, b, output;
	scanf("%d,%d", &a, &b);
	output = Least_Common_Multiple(a, b);
	printf("%d", output);
}

int Least_Common_Multiple(int a, int b) {
	for (int i = 1; i < pow(2, 30); i++)
		if ((i % a == 0) && (i % b == 0))
			return i;
}