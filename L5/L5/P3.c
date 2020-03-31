#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int ArrayStack[MAX_SIZE];
int topA = -1;
int Comp[MAX_SIZE];
int topC = -1;
void Push(int x)
{
	if (topA == MAX_SIZE - 1)
	{
		printf("Error: stack overflow\n");
		return;
	}
	ArrayStack[++topA] = x;
}
void PushC(int x)
{
	if (topC == MAX_SIZE - 1)
	{
		 
		printf("Error: stack overflow\n");
		return;
	}
	Comp[++topC] = x;
}
void PopC()
{
	if (topC == -1)
	{
		 
		printf("Error: No element to pop\n");
		return;
	}
	topC--;
}
void Print() {
	int i;
	printf("Stack: ");
	for (i = 0; i <= topA; i++)
	{
		printf("%d ", ArrayStack[i]);
	}
	printf("\n");
}
int main()
{
	int i, n, x, aux, t = 0;
	printf("cate numere introduceti?:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		t = 0;
		printf("x=");
		scanf("%d", &x);
		aux = x;
		while (aux)
		{
			PushC(aux % 10);
			aux = aux / 10;
		}
		aux = x;
		while (t == 0 && aux != 0)
		{
			if (aux % 10 != Comp[topC])
				t = 1;
			aux = aux / 10;
			PopC();
		}
		if (t == 0)
			Push(x);
		
	}
	Print();
	system("pause");
	return 0;
}