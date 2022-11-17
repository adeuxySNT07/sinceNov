#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Isprime(int n) {
	scanf("%d", n);
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
//StudybarCommentBegin
int main()
{
	int  m, flag = 1; /*标志变量flag初值置为1*/

	//printf("Please enter a number:");
	scanf("%d", &m);

	flag = Isprime(m);


	if (flag)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
//StudybarCommentEnd