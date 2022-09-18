# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>

void test()
{
	static int a = 1;
	
	++a;
	printf("%d\n",a);
	
}
int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}
#define Max(x,y) (x>y?x:y)//宏
int main()
{
	/*int a = 10;
	int b = a--;
	printf("a=%d b=%d", a, b);
	return 0;*/
	/*int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int max = 0;
	max = (a > b ? a : b);
	printf("max=%d\n", max);*/
	/*typedef int i;
	i a = 1;
	printf("%d\n", a);*/
	/*int i = 0;
	while(i<5)
	{
		test();
		i++;

	}*/
	/*extern int g;
	/*printf("g=%d\n", g);*/
	/*extern int ADD(int, int);
	int a = 4, b = 5;
	int sum =ADD(a, b);
	printf("%d\n", sum);*/
	/*int a = 40, b = 65;
	int max = 0;
	int maX = 0;
	max =  MAX(a, b);
	maX = Max(a, b);
	printf("%d\n%d\n", max, maX);
	return 0;*/
	/*int a = 20;
	int* p = &a;
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 40;
	printf("%p\n", p);
	printf("%d\n", a);*/
	char ch = 'a';//将字符a存入变量ch中
	char*p = &ch;
	*p = 'b';
	printf("%c\n", ch);
	printf("%d\n", sizeof(p));
	return 0;




	return 0;
}