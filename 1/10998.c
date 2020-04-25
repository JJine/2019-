#include <stdio.h>
main()
{
	int a,b;
	double c;
	scanf("%d %d", &a, &b);
	c=(double)a/b;
	printf("%.9lf", c);
}
