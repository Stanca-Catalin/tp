#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX_SIZE 100
int ArrayStack[MAX_SIZE];
int top = -1;
void Push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		printf("Error: stack overflow\n");
		return;
	}
	ArrayStack[++top] = x;
}
void Print() {
	int i;
	printf("Stack: ");
	for (i = 0; i <= top; i++)
	{
		printf("%d ", ArrayStack[i]);
	}
	printf("\n");
}
int main()
{
	int i, n, x, V[8], j = 7;
	printf("cata numere:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("x=");
		scanf("%d", &x);
		while (j>=0)
		{
			if (x != 0)
			{
				if (x % 2 == 0)
					V[j] = 0;
				else
					V[j] = 1;
			}
			else
				V[j] = 0;
			j--;
			x=x / 2;
		}
		for (j = 0; j <= 7; j++)
		{
			if (V[j] == 0)
				V[j] = 1;
			else
				V[j] = 0;
		}
		x = 0;
		for (j = 0; j <=7; j++)
		{
			x = x *10 + V[j];
		}
		Push(x);
	}
	Print();
	system("pause");
	return 0;
}