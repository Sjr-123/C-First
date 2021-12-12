#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	int i ;
	//scanf("%d", &n);
	for (int n = 100; n < 201; n++)
	{
		for (i = 2; i <=sqrt(n); i++)
		{
			if (n%i == 0)
			{
				break;
			}
		}
		if (i >sqrt(n))
		{
			printf("%d ", n);
		}
	}
	//for ( i = 2;  i < n ;  i++)
	//{
	//	if (n%i ==0)
	//	{
	//		break;
	//	}	
	//}
	//if ( i == n)
	//{
	//	printf("%d", n);
	//}

	return 0;
}