#include <stdio.h>

int main(int argc, const char *argv[])
{
	char str1[32] = {0};
	char str2[32] = {0};
	char *p = str1;
	char *m = str2;

	printf("请输入str1:\n");
	gets(str1);
	printf("请输入str2:\n");
	gets(str2);

	while (*p == *m && *p)
	{
		p++;
		m++;
	}
	if (*p > *m)
	{
		printf("1\n");
	}
	else if (*p < *m)
	{
		printf("-1\n");
	}
	else if (*p == *m)
	{
		printf("0\n");
	}

	return 0;
}
