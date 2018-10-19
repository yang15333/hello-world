#include <stdio.h>

#define N 5

int main(int argc, const char *argv[])
{
	int a[N][N];
	int i;
	int j;
	int min;
	int max;
	
	//生成随机数组
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
	
	//按行打印数组
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N;j++)
		{
			printf("%-3d ", a[i][j]);
		}
		printf("\n\n");
	}
	
	//遍历主对角线元素，找出最大值
	max = a[0][0];
	for (i = 0; i < N; i++)
	{
		if (a[i][i] > max)
		{
			max = a[i][i];
		}
	} 
	
	//遍历辅对角线元素，找出最小值
	min = a[0][N-1];
	for (i = 0; i < N; i++)
	{
		if (a[i][N-1-i] < min)
		{
			min = a[i][N-1-i];
		}
	}
	
	printf("主对角线最大值：%d\n", max);
	printf("辅对角线最小值：%d\n", min);

	return 0;
}
