#include<stdio.h>
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += a[i];
	}
	sum *= 0.1;
	int j = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] > sum)
			j++;
	}
	printf("%d", j);
	return 0;
}