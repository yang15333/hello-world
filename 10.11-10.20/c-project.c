/*输入一个字符串，将字符串元素倒置输出*/
/*
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char str[32] = {0};
	char *head = 0;
	char *tail = 0;
	char tmp = 0;

	printf("请输入字符串：\n");
	gets(str);
	head = str;
	tail = head + strlen(str) - 1;

	while (head < tail)
	{
		tmp = *head;
		*head = *tail;
		*tail = tmp;
		head++;
		tail--;
	}
	
	puts(str);

	return 0;
}
*/

/*使用指针将str1复制到str2*/
/*
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
	*m = 0;	
	
	printf("str2为：\n%s\n", str2);

	return 0;
}
*/

/*使用指针将str2拼接至str1*/
/*
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
*/

/*使用指针完成strcmp的功能*/
/*
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
*/

/*输入一串含空格的字符，判断其中有几个单词*/
/*
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
		//以非空格字符后面是否有空格或'\0'判断单词结尾
		if (*p != ' ' && (*(p+1) == ' ' || *(p+1) == 0))
		{
			i++;
		}
		p++;
	}
	
	printf("有%d个单词\n", i);

	return 0;
}
*/

/*输入五个字符串，并按字符串字母顺序排序输出*/
/*
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
*/

/*超长位数的数字求和*/
/*
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
*/
