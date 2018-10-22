/* 封装一个实现strcpy功能的函数 */
/*
#include <stdio.h>

int mystrcpy(char *p1, char *p2)
{
	while (*p2)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = 0;

	return 0;
}
int main(int argc, const char *argv[])
{
	char str1[32] = {0};
	char str2[32] = {0};

	printf("请输入一个字符串：\n");
	gets(str1);

	mystrcpy(str2, str1);
	printf("str2:\n%s\n", str2);

	return 0;
}
*/

/* 封装一个实现strcat功能的函数 */
/*
#include <stdio.h>

int mystrcat(char *p1, char *p2)
{
	while (*p1)
	{
		p1++;
	}
	while (*p2)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	p1 = 0;

	return 0;
}

int main(int argc, const char *argv[])
{
	char str1[32] = {0};
	char str2[32] = {0};
	
	printf("请输入字符串1：\n");
	gets(str1);
	printf("请输入字符串2：\n");
	gets(str2);

	mystrcat(str1, str2);
	printf("拼接后的字符串1：\n%s\n", str1);
	
	return 0;
}
*/

/* 封装一个实现strcmp功能的函数 */
/*
#include <stdio.h>

int mystrcmp(char *p1, char *p2)
{
	int ret = 0;

	while (*p1 == *p2 && *p1)
	{
		p1++;
		p2++;
	}
	if (*p1 > *p2)
	{
		ret = 1;
	}
	else if (*p1 < *p2)
	{
		ret = -1;
	}

	return ret;
}
int main(int argc, const char *argv[])
{
	char str1[32] = {0};
	char str2[32] = {0};
	int ret = 0;

	printf("请输入字符串1：\n");
	gets(str1);
	printf("请输入字符串2：\n");
	gets(str2);

	ret = mystrcmp(str1, str2);

	printf("%d\n", ret);
	return 0;
}
*/

/* 封装一个实现字符串倒置功能的函数 */
/*
#include <stdio.h>
#include <string.h>

int daozhi(char *head, int len)
{
	char *tail = NULL;
	char tmp = 0;

	tail = head + len - 1;
	
	while (head < tail)
	{
		tmp = *head;
		*head = *tail;
		*tail = tmp;
		head++;
		tail--;
	}

	return 0;
}

int main(int argc, const char *argv[])
{
	char str[32] = {0};
	int len = 0;

	printf("请输入一个字符串：\n");
	gets(str);
	
	len = strlen(str);
	daozhi(str, len);

	printf("倒置后的字符串：\n%s\n", str);

	return 0;
}
*/

/* n个人围成一个圈子，从第一个人顺序报号1，2，3...
 * 当报到k者退出圈子，找出最后剩下的人最初序号 */
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[32] = {0};
	int n = 0;
	int k = 0;
	int i = 0;
	int j = 0;
	int cnt = 0;

	printf("请输入人数n：");
	scanf("%d", &n);
	printf("请输入每次点名数k：");
	scanf("%d", &k);

	for (i = 0; i < n; i++)	//给所有人员编号排序
	{
		a[i] = i + 1;
	}
	
	i = 0;
	
	//i为点名计数器，j为遍历数组下标，cnt为出局人员计数器
	while (cnt < n-1)		//当出局n-1人时，循环停止
	{
		
		if (a[j] > 0)		//判断是否是在场人员
		{
			i++;			
			if (i == k)		
			{
				printf("%5d号出局！\n", a[j]);
				a[j] = -1;	//出局人员用-1表示
				i = 0;		//出局后从下个人开始数，计数器归零
				cnt++;		//已出局人数+1
			}
		}
		j++;				
		if (a[j] == 0)		//判断是否到有效数组末尾
		{
			j = 0;			//非有效元素时，j归零
		}
	}
	
	for (j = 0; j < n; j++) //判断最后在场人员的序号
	{
		if (a[j] != -1)
		{
			printf("最后剩下的人最初序号为：%d\n", a[j]);
		}
	}

	return 0;
}
*/
