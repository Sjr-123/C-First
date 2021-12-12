#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1000; i < 2001; i++)
	{
		
		if (i%4== 0 && i%100!= 0)           //闰年的判断
		{                                  //1.普通年份：能被4整除且不能被100整除
			printf("%d年 ", i);           //2.世纪年份：能被400整除
			sum++;
		}
		else if (i%400==0)
		{
			printf("%d年", i);
			sum++;
		}
		/*if(((i%4== 0)&&(i%100!= 0))||(i%400==0))
		{
		    printf("%d年 ", i);          
		    sum++;
		}*/
	}
	printf("\n总计%d个", sum);
	return 0;
}