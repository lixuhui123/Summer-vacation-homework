#include<stdio.h>
#include<stdlib.h>
int main1()
{
	/*const int i = 0;
	int *j = (int *)&i;
	*j = 1;
	printf("%d %d", i, *j);*/
	int a[5] = { 1,2,3,4,5 };
	int *p1 = (int *)(&a + 1);//1
	int *p2 = (int *)((int)a + 1);//内存中1代表8位一个字节
	int *p3 = (int *)(a + 1);//3
	printf("%d,%x,%d\n", p1[-1], p2[0], p3[1]);
    system("pause");
    return 0;
}

