#include <stdio.h>

int main(int argc, const char *argv[])
{
	char str1[32] = {0};
	char str2[32] = {0};
	char *p = str1;
	char *m = str2;

	printf("请输入str1：\n");
	gets(str1);

	while (*p)
	{
		*m = *p;
		m++;
		p++;
	}
	
	printf("str2为：\n%s\n", str2);

	return 0;
}
