#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char str1[32] = {0};
	char str2[32] = {0};
	char *p = str1;
	char *m = str2;

	printf("请输入str1：\n");
	gets(str1);
	printf("请输入str2：\n");
	gets(str2);

	p += strlen(str1);

	while (*m)
	{
		*p = *m;
		p++;
		m++;
	}
	
	printf("strcat(str1, str2)\n%s\n", str1);

	return 0;
}
