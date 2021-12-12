#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (int i = 1; i < 101; i++)
	{
		if (i%10 == 9 )
		{
			//printf("%d ", i);
			sum++;
		}
		if (i / 10 == 9)
		{
			sum++;
		}
	}
	printf("\nsum=%d", sum);
	return 0;
}