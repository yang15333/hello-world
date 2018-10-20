#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char str[5][32] = {0};
	char tmp[32] = {0};
	int i = 0;
	int j = 0;

	printf("请输入五个字符串：\n");
	
	//降维处理，将二维字符串数组当做一维数组操作
	for (i = 0; i < 5; i++)
	{
		gets(str[i]);
	}
	
	//冒泡排序
	for (j = 4; j > 0; j--)
	{
		for (i = 0; i < j; i++)
		{
			if (strcmp(str[i], str[i+1]) == 1)
			{
				strcpy(tmp, str[i]);
				strcpy(str[i], str[i+1]);
				strcpy(str[i+1], tmp);
			}
		}
	}
 	
	printf("排序后的字符串为：\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", str[i]);
	}
	
	return 0;
}
