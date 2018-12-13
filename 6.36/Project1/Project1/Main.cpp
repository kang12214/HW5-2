#include<stdio.h>
#include<stdlib.h>
#define size 100
void StringReverse(const char* const s);

int main(void)
{
	char s[size];

	printf("Please enter the strings\n");
	scanf_s("%s", &s,size);

	printf("the inverted strings order is\n");

	StringReverse(s);

	system("pause");
	return 0;
}

void StringReverse(const char* const s)
{
	if (s[0] == '\0')
	{
		return;
	}
	else
	{
		StringReverse(&s[1]);
		printf("%d", s[0]);
	}
}