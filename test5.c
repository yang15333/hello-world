#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char str1[32] = {0};
	char str2[32] = {0};
	char sum[64] = {0};
	char *p = 0;
	char *m = 0;
	char *n = 0;
	int i = 0;

	printf("请输入数字1：\n");
	scanf("%s", str1);   		//scanf不会读取空格字符
	printf("请输入数字2：\n");
	scanf("%s", str2); 
	
	//因为运算是从个位开始，所以用指针标记有效元素尾部地址
	p = str1 + strlen(str1) - 1;
	m = str2 + strlen(str2) - 1;
	n = sum + strlen(str1) + strlen(str2);	//定位一个sum的尾部地址，后同
	
	while (p >= str1)
	{
		*p -= '0';		//从字符数字转换成对应数值计算	
		*n = *p;
		*p += '0';		//转换回对应字符储存	
		p--;
		n--;
	}
	
	n = sum + strlen(str1) + strlen(str2);
	while (m >= str2)
	{
		*m -= '0';	
		*n += *m;
		*m += '0';
		m--;
		n--;
	}
	
	n = sum + strlen(str1) + strlen(str2);
	//判断是否需要进位
	while (n >= sum)
	{
		if (*n > 9)
		{
			*n -= 10;
			*(n-1) += 1;
		}
		n--;
	}
	//找到sum[i]中不为'\0'的首元素，并标记指针
	for (i = 0; sum[i] == 0; i++);
	n = &sum[i];
	
	//用后面的有效元素替换前方所有'\0',并将数值转化为字符
	for (i = 0; n <= sum + strlen(str1) + strlen(str2); i++)
	{
		sum[i] = *n + '0';
		*n = 0;
		n++;
	}

	printf("***************** SUM *****************\n\n");
	printf("%25s +\n", str1);
	printf("%25s =\n", str2);
	printf("%25s\n", sum);
	printf("\n***************************************\n");
	
	return 0;
}
