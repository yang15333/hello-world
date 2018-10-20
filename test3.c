#include <stdio.h>

int main(int argc, const char *argv[])
{
	char str[32] = {0};
	char *p = str;
	int i = 0;
	
	printf("请输入字符串：\n");
	gets(str);

	while (*p)
	{
		if (*p != ' ' && (*(p+1) == ' ' || *(p+1) == 0))
		{
			i++;
		}
		p++;
	}
	
	printf("有%d个单词\n", i);

	return 0;
}
