#include<stdio.h>
#include<math.h>
int main() {
	int a[10] = {0};
	int inPut;
	for(int i = 0; i < 10;i++) {
		scanf("%d", &a[i]);
	}
	inPut = a[0];
	for (int i = 1; i < 10; i++) {
		if (abs(a[i]) <= abs(inPut)) {
			inPut = a[i];
		}
	}
	printf("%d", inPut);
	return 0;
}