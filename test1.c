#include <stdio.h>
#define N 32

int main(int argc, const char *argv[])
{
	char str1[N] = {0};
	char str2[N] = {"helloworld"};
	int i = 0;
	
	printf("请输入字符串1：\n");
	gets(str1);

	for (i = 0; str1[i] != 0; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = 0;

	printf("字符串1为：\n%s\n", str1);
	printf("字符串2为：\n%s\n", str2);

	return 0;
}
