#include  <stdio.h>
#include<string.h>
void verse(char* s, char* t);
int main()
{
	char   s[100], t[100];
	scanf("%s", s);
	verse(s, t);
	printf("%s\n", t);
	return 0;
}
void verse(char* s, char* t)
{
	int  i, d;
	d = strlen(s);
	for (i = 0; i < d; i++)
	{
		*(t + i) = *(s + i);
	}
	for (i = 0; i < d; i++)
	{
		*(t + d + i) = *(s + d - 1 - i);
	}
	*(t + 2 * d) = '\0';
}