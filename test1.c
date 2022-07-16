#include<stdio.h>
 
int main()
{
	int a, b, c, max;
	printf("please input a,b,c: 注意中间用逗号隔开\n");
	scanf_s("%d,%d,%d", &a, &b, &c);//_CRT_SECURE_NO_WARNINGS
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("你个大傻逼最大数是 %d\n", max);
	return 0;
}