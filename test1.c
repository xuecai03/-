#include<stdio.h>
 
int main()
{
	int a, b, c, max;
	printf("please input a,b,c: ע���м��ö��Ÿ���\n");
	scanf_s("%d,%d,%d", &a, &b, &c);//_CRT_SECURE_NO_WARNINGS
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("�����ɵ��������� %d\n", max);
	return 0;
}