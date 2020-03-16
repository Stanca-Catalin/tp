#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n, x = 0, i = 1, V[8], nr = 0;
	printf("introduceti nr:");
	scanf("%d", &n);
	while (n)
	{
		x = x + n % 2 * i;
		n = n / 2;
		i = i * 10;
	}
	printf("%d\n", x);
	for (i = 7; i >= 0; i--)
	{
		if (x != 0 && x % 10 == 0)
			V[i] = 1;
		else
			V[i] = 0;
		if (x == 0)
			V[i] = 1;
		x = x / 10;
	}
	for (i = 0; i < 8; i++)
	{
		printf("%d", V[i]);
	}
	printf("\n");
	for (i = 7; i >= 0; i--)
	{
		if (V[i] == 1)
			nr = nr + pow(2, 7 - i);
	}
	printf("%d", nr);
	system("pause");
	return(0);
}