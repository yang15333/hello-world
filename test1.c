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
