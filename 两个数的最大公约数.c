#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m = 0;                  //Õ·×ªÏà³ý·¨
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (m%n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d", n);
	return 0;
}