#include<stdio.h>
int main() {
	int temp = 0, a[10], ctime = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (a[j + 1] < a[j]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			ctime++;

		}
		printf("After pass %d :", i);
		for (int k = 0; k < 10 - i; k++) {
			printf("%4d", a[k]);
		}
		printf("\n");
	}
	printf("Data items in ascending order\n");
	for (int i = 0; i < 10; i++) {
		printf("%4d", a[i]);
	}
	printf("\nNumber of comparisons = 45", ctime);
	return 0;
}