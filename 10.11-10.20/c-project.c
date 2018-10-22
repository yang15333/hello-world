/*输入一个字母，将他转换成大写或小写*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	char cap = 0;
    char low = 0;

	printf("请输入一个大写字母：");
	scanf("%c",&cap);

	low = cap+32;

	printf("\n该字母的小写为：%c\n\n",low);

	return 0;
}
*/

/*输入两个数比较大小*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	printf("请输入两个数：");
	scanf("%d %d",&num1,&num2);

	if(num1>num2)
	{
		printf("\n较大的数为：%d\n\n",num1);
	}
	else if(num1<num2)
	{
		printf("\n较大的数为：%d\n\n",num2);
	}
	else
	{
		printf("\n这两个数相等。\n\n");
	}

	return 0;
}
*/

/*输入两个两位数，组成一个四位数，第一个数个位为千位
 *十位为个位，第二个数个位为十位，十位为百*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int tho = 0;
	int hun = 0;
	int ten = 0;
	int uni = 0;
	int final = 0;

	printf("请输入两个两位数（以空格隔开）：");
	scanf("%d %d",&num1,&num2);

	tho = num1%10;
	uni = num1/10;
	ten = num2%10;
	hun = num2/10;
	final = tho*1000+hun*100+ten*10+uni;

	printf("\n生成的数字为：%d\n\n",final);

	return 0;
}
*/

/*输入三角形的三边，输出该三角形周长和面积*/
/*
#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	float a,b,c,l,p,area;

	printf("请输入三角形三边长(以空格间隔):");
	scanf("%f %f %f",&a,&b,&c);

	l = a+b+c;
	p = l/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));//海伦公式
	
	if(a<(b+c)&b<(a+c)&c<(a+b))
	{
		printf("\n该三角的周长为:%f.\n该三角的面积为:%f.\n",l,area);
	}
	else
	{
		printf("您输入的边长无法构成三角形！\n");
	}

	return 0;
}
*/

/*输入三个数a,b,c,交换后的值为c,a,b*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d%d%d",&a,&b,&c);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	c = b ^ c;
	b = b ^ c;
	c = b ^ c;

	printf("%d %d %d \n",a,b,c);

	return 0;
}
*/

/*输入两个数，输出它们的加减乘除取余结果*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 0;

	scanf("%d%d",&a,&b);

	printf("%d + %d = %d\n",a,b,a + b);
	printf("%d - %d = %d\n",a,b,a - b);
	printf("%d * %d = %d\n",a,b,a * b);
	printf("%d / %d = %f\n",a,b,(float)a / b);
	printf("%d %% %d = %d\n",a,b,a % b);

	return 0;
}
*/

/*输入圆的半径，输出该圆周长和面积*/
/*
#include <stdio.h>
#define PI 3.141592

int main(int argc, const char *argv[])
{
	float r = 0;
	float c = 0;
	float area = 0;

	scanf("%f",&r);
	
	c = 2*r*PI;
	area = r*r*PI;
	
	printf("圆周长为：%f\n",c);
	printf("圆面积为：%f\n",area);

	return 0;
}
*/

/*输入两圆的坐标和半径，判断两圆位置关系*/
/*
#include <stdio.h>
#include <math.h>
#define EPSILON 0.000001

int main(int argc, const char *argv[])
{
	float r1 = 0;
	float r2 = 0;
	float x1 = 0;
	float x2 = 0;
	float y1 = 0;
	float y2 = 0;
	float dx = 0;
	float dy = 0;
	float sq_distance = 0;
	float distance = 0;
	float sum_r = 0;
	float dif_r = 0;

	printf("\nplease enter the first circle radius:");
	scanf("%f",&r1);
	printf("\nplease enter the second circle radius:");
	scanf("%f",&r2);
	printf("\nplease enter the first circle center coordinate:x1,y1\n");
	scanf("%f,%f",&x1,&y1);
	printf("\nplease enter the second circle center coordinate:x2,y2\n");
	scanf("%f,%f",&x2,&y2);

	dx = x1-x2;
	dy = y1-y2;
	sq_distance = dx*dx+dy*dy;
	distance = sqrt(sq_distance);
	sum_r = r1+r2;
	dif_r = fabs(r1-r2);

	if(distance>sum_r)
	{
		printf("\n\nTwo circles do not intersect.\n");
	}
	else if(fabs(distance-sum_r)<EPSILON)
	{
		printf("\n\nContact of two circles.\n");
	}
	else if(distance>dif_r)
	{
		printf("\n\nIntersection of two circles.\n");	
	}
	else if(fabs(distance-dif_r)<EPSILON)
	{
		printf("\n\nContact of two circles.\n");
	}
	else
	{
		printf("\n\nTwo circles do not intersect.\n");
	}

	return 0;
}
*/

/*输入一个年份，判断该年是平年还是闰年*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int year = 0;

	scanf("%d",&year);

	if(year % 4 == 0 && year % 100 != 0)
	{
		printf("该年是闰年。");
	}
	else if(year % 400 == 0)
	{
		printf("该年是闰年。");
	}
	else
	{
		printf("该年是平年。");
	}

	return 0;
}
*/

/*输入一个三位数abc，输出三位数为cba*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num = 0;
	int ge = 0;
	int shi = 0;
	int bai = 0;

	printf("请输入一个三位数：");
	scanf("%d",&num);

	ge = num % 10;
	shi = (num % 100)/10;
	bai = num / 100;
	num = ge * 100 + shi * 10 + bai;

	printf("%d\n",num);


	return 0;
}
*/

/*输入三个数，判断三个数是否为两奇一偶*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
    int cond1 = 0;
	int cond2 = 0;
	int cond3 = 0;
	int cond4 = 0;
    
	scanf("%d%d%d",&num1,&num2,&num3);
	
	cond1 = (num1+num2+num3)%2 == 0;
	cond2 = num1%2 != 0;
	cond3 = num2%2 != 0;
	cond4 = num3%2 != 0;
	
	printf(cond1&&(cond2||cond3||cond4)?"YES\n":"NOT\n");

	return 0;
}
*/

/* 输入成绩，90分以上优秀，80以上良好
 * 70分以上中等，60以上及格，60以下不及格 */
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int score = 0;

	scanf("%d",&score);
	
	if (score >= 0 && score <= 100)
	{
		switch (score / 10)
		{	
			case 10:printf("优秀\n");break;	
			case 9:printf("优秀\n");break;
			case 8:printf("良好\n");break;
			case 7:printf("中等\n");break;
			case 6:printf("及格\n");break;
			default:
				   printf("不及格\n");
		}
	}
	else
	{
		printf("输入有误\n");
	}

	return 0;
}
*/

/*打印出100以内的素数*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num = 100;
	int i = 0;
	int j = 0;

	for (i = 0; i <= num; i++)
	{
		for(j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	} 
	return 0;
}
*/

/*输入一个数，判断是否是素数*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num = 0;
	int i = 0;

	printf("请输入一个正整数:");
	scanf("%d", &num);
	
	if (num == 1)//1不是素数
	{
		printf("不是素数。\n");
	}
	for (i = 2; i < num; i++)
	{
		if (num % i == 0 )
		{
			printf("不是素数。\n");
			break;
		}
	}
	if (i == num)//直到i == num时还未被整除则为素数
	{
		printf("是素数。\n");
	}

	return 0;
}
*/

/*计算1+2+3+...+99+100的结果*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int sum = 0;

	for (i = 0; i <= 100; i++)
	{
		sum += i;
	}
	
	printf("0 + 1 + 2 + ... + 99 + 100 = %d\n",sum);

	return 0;
}
*/

/*输入年-月-日，输出该日是该年的第几天，该年还剩几天*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int year = 0;
	int month = 0;
	int day = 0;
	int daynum = 0;
	int remain = 0;
	int i = 0;

	printf("请分别输入年-月-日：");
	scanf("%d-%d-%d", &year, &month, &day);
	
	//判断年份是否闰年。
	if ((0 == year % 4 && 0 != year % 100) || (0 == year % 400))
	{
		year = 1;
	}
	else
	{
		year = 0;
	}

	// 根据月份循环累加之前月份天数
	for (i = 1; i < month; i++)//i < month 一月和当前月不会进入循环
	{
		if (2 == i)
		{
			daynum += year?29:28;
		}
		else if ((i < 8 && i % 2 != 0) || (i >= 8 && i % 2 == 0))//判断大月
		{
			daynum += 31;
		}
		else
		{
			daynum += 30;
		}
	}

	daynum += day;
	remain = year?366 - daynum:365 - daynum;

	printf("该天是该年的第%d天，该年还剩%d天\n", daynum, remain);

	return 0;
}
*/

/*鸡兔同笼，140只脚，50个头，求鸡兔数*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int ji = 0;

	for (ji = 0; ji <= 50; ji++)
	{
		if (140 == (ji * 2 + (50 - ji) * 4))
		{
			printf("鸡有%d只，兔有%d只\n", ji, 50-ji);
		}
	}

	return 0;
}
*/

/*输出1000以内满足被2，3，5整除的数*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int sum = 0;
	int i = 0;

	for (i = 0; i <= 1000; i++)
	{
//		if (1 == i % 30)
		if ((1 == i % 2) && (1 == i % 3) && (1 == i % 5))
		{
			sum += i;
//			printf("满足的数 = %d\n" ,i);
		}
	}
	
	printf("sum = %d\n", sum);

	return 0;
}
*/

/*输入n个数字，以-1结束，去掉最大值和最小值求平均*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int max = 0;
	int min = 100;
	int i = 0;
	int num = 0;
	int sum = 0;

	while (-1 != num)
	{
		sum += num;
		scanf("%d",&num);
	
		if (num >= max && -1 != num)
		{
			max = num;
		}
		if (num <= min && -1 != num)
		{
			min = num;
		}
		i++;
	}
	
	sum -= (min + max);
	i -= 3;			//输入-1时i多+1.
	
	printf("平均分是%.2f\n", (float)sum / i);

	return 0;
}
*/

/*输出三位数的水仙花数*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int flower = 0;
	int ge = 0;
	int bai = 0;
	int shi = 0;

	for (flower = 100; flower < 1000; flower++)
	{
		bai = flower / 100;
		shi = (flower / 10) % 10;
		ge = flower % 10;
		if ((ge * ge * ge + shi * shi * shi + bai * bai * bai) == flower)
		{
			printf("%d^3 + %d^3 + %d^3 = %d\n", bai, shi, ge, flower);
		}
	}

	return 0;
}
*/

/* 输入一个数，满足2^k小于等于该数，输出最大k */
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int m = 0;
	int k = 0;
	int max = 1;

	printf("请输入一个正整数：");
	scanf("%d", &m);
	
	for (k = 1; max < m; k++)
	{
		max *= 2;  
	}
	k -= 1;
	printf("满足条件最大的k = %d\n", k);

	return 0;
}
*/

/*按一行8个数打印满足末位是6且被3整除的三位数*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int num = 0;
	
	for (num = 100; num < 1000; num++)
	{
		if (num % 10 == 6 && num % 3 == 0)
		{
			printf("%d ", num);
			i++;
			if (i % 8 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\ni = %d\n", i);

	return 0;
}
*/

/*输入两个数，求最大公约数和最小公倍数*/
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int i = 0;
	int max = 0;

	printf("请输入两个正整数：");
	scanf("%d%d", &num1, &num2);
	i = num1 > num2?num2:num1;
	for (; i >= 1; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf("最大公约数为%d，", i);
			break;
		}
	}
	i = num1 > num2?num1:num2;
	for (; i <= num1 * num2; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			printf("最小公倍数为%d\n", i);
			break;
		}
	}

	return 0;
}
*/

/* 选择排序 */
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int min = 0;
	int i = 0;
	int j = 0;
	int a[5] = {0};
	int mid = 0;
	int len = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}

	for (i = 0; i < len; i++)
	{
		min = i;
		for (j = i+1; j < len; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		mid = a[min];
		a[min] = a[i];
		a[i] = mid;
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/

/* 冒泡排序 */
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[5] = {0};
	int i = 0;
	int j = 0;
	int len = sizeof(a) / sizeof(a[0]);
	int tmp = 0;

	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = len-1; j > 0; j--)
	{
		for (i = 0; i < j; i++)
		{
			if(a[i] < a[i+1])
			{
				tmp = a[i];
				a[i] = a[i+1];
				a[i+1] = tmp;
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
*/

/* 斐波那契数列前n项求和 */
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n = 0;
	int i = 0;
	int a[100] = {1,1};
	unsigned int sum = 0;

	printf("请输入要计算的项数：");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		a[i+2] = a[i+1] + a[i];
		sum += a[i];
	}
	
	printf("sum = %u\n", sum);

	return 0;
}
*/

/* 二维数组的赋值打印操作 */
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[5][5] = {0};
	int i = 0;
	int j = 0;
	int cnt = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cnt++;
			a[i][j] = cnt;
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("a[%d][%d] = %-2d ", i, j, a[i][j]);
		}
		putchar('\n');
	}

	return 0;
}
*/

/* 三维数组的赋值打印操作 */
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[100][100][100] = {0};
	int i = 0;
	int j = 0;
	int k = 0;
	int cnt = 0;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			for (k = 0; k < 100; k++)
			{
				cnt++;
				a[i][j][k] = cnt % 10;
			}
		}
	}
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			for (k = 0; k < 100; k++)
			{
				printf("a[%d][%d][%d] = %d\n", i, j, k, a[i][j][k]);
			}
		}
	}

	return 0;
}
*/

/* 输入一行字符串，按间隔输出 */
/*
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char str[20] = {0};
	int i = 0;

	gets(str);
	printf("%d", strlen(str));
	
	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}

	return 0;
}
*/

/* 计算a+aa+aaa+aaaa型式子的和值 */
/*
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
*/

/* 生成一个N*N的随机数组，打印出主对角线最大值
 * 和辅对角线的最小值 */
/*
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
*/

/* 简单密码校验是否相符 */
/*
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char str1[32] = {0};
	char str2[32] = {"admin"};
	int i = 0;

	printf("请输入密码：");

	for (i = 0; i < 3; i++)
	{
		gets(str1);
		if (strcmp(str1 ,str2))
		{
			printf("密码错误！\n");
		}
		else
		{
			printf("密码正确！\n");
			break;
		}
		if (i < 3)
		{
			printf("请重新输入：");
		}
	}
	if (3 == i)
	{
		printf("已连续三次输错密码！退出\n");
	}
	return 0;
}
*/

/* 输入一串字符串，打印出该字符串大小写字母
 * 数字，和空格的数量 */
/*
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int caps = 0;
	int lower = 0;
	int space = 0;
	int num = 0;
	char str[32] = {0};
	char *p = str;

	gets(p);
	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			lower++;
		}
		else if (*p >= 'A' && *p <= 'Z')
		{
			caps++;
		}
		else if (*p == ' ')
		{
			space++;
		}
		else if (*p >= '0' && *p <= '9')
		{
			num++;
		}
		p++;
	}
	
	printf("大写字母：%d\n小写字母：%d\n空格：%d\n数字：%d\n", caps, lower, space, num);

	return 0;
}
*/

/* 输入一个字符串，将字符串元素倒置输出 */
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

/* 使用指针将str1复制到str2 */
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

/* 使用指针将str2拼接至str1 */
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

/* 使用指针完成strcmp的功能 */
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

/* 输入一串含空格的字符，判断其中有几个单词 */
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

/* 输入五个字符串，并按字符串字母顺序排序输出 */
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

/* 超长位数的数字求和 */
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
