#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int n = 0;
	int i = 0;
	int mul = 0;
	int sum = 0;

	printf("请输入a(1-9整数)：");
	scanf("%d", &a);
	printf("请输入n：");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		mul = mul * 10 + a;
		sum += mul;
		printf("%d", mul);
		if (i < n - 1)
		{
			printf("+");
		}
		else
		{
			printf("=%d\n", sum);
		}
	}
	return 0;
}
