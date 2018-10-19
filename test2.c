#include <stdio.h>
#define N 32

int main(int argc, const char *argv[])
{
	char str1[N] = {0};
	char str2[N] = {0};
	int i = 0;
	int j = 0;

	printf("请输入字符串1：\n");
	gets(str1);
	printf("请输入字符串2：\n");
	gets(str2);

	for (i = 0; str1[i]; i++);
	for (j = 0; str2[j]; j++)
	{
		str1[i+j] = str2[j];
	}
	str1[i+j] = 0;

	printf("拼接后的字符串1为：\n%s\n", str1);

	return 0;
}
