#include <stdio.h>

int main(void)
{
	int x;
	int Amax = 100, Amin = 80;
	int Bmax = 79, Bmin = 70;
	int Cmax = 69, Cmin = 60;
	int Dmax = 59, Dmin = 50;
	int Emax = 49, Emin = 0;

	printf("put in the marks\n");
	scanf("%d", &x);

	if (Amin <= x && Amax >= x)
	{
		printf("GRADE A\n");
	}
	else if (Bmin <= x && Bmax >= x)
	{
		printf("GRADE B\n");
	}
	else if (Cmin <= x && Cmax >= x)
	{
		printf("GRADE C\n");
	}
	else if (Dmin <= x && Dmax >= x)
	{
		printf("GRADE D\n");
	}
	else if (Emin <= x && Emax >= x)
		printf("GRADE E\n");
	return (0);
}
