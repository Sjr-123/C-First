#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1000; i < 2001; i++)
	{
		
		if (i%4== 0 && i%100!= 0)           //������ж�
		{                                  //1.��ͨ��ݣ��ܱ�4�����Ҳ��ܱ�100����
			printf("%d�� ", i);           //2.������ݣ��ܱ�400����
			sum++;
		}
		else if (i%400==0)
		{
			printf("%d��", i);
			sum++;
		}
		/*if(((i%4== 0)&&(i%100!= 0))||(i%400==0))
		{
		    printf("%d�� ", i);          
		    sum++;
		}*/
	}
	printf("\n�ܼ�%d��", sum);
	return 0;
}