#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��1 / 1 - 1 / 2 + 1 / 3 - ���� + 1 / 99 - 1 / 100 =
#include <math.h>
int main()
{
	
	int a = 1;
	double sum = 0.0;
	while (a < 101)
	{
		int b = pow(-1, a - 1)*a;
		sum +=1.0/b ;//1.0��ΪС������sum�ĳ�С��
		a++;
		
	}
	printf("sum=%lf", sum);
}