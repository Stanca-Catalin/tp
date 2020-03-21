#include<stdio.h>
#include<stdlin.h>

//P4

typedef struct binar
{
	int x;
	struct binar *urm;
}nod;

nod *adaugare(nod *prim, int k)
{
	nod *p, *q;
	p = (nod *)malloc(sizeof(nod));
	p->x = k;
	p->urm = NULL;
	if (prim == NULL) 
		return p;
	else 
	{
		q = prim;
		while (q->urm != NULL)
		{
			q = q->urm;
		}
		q->urm = p;
		return prim;
	}
}

void afisare(nod *prim)
{
	nod *p;
	p = prim;
	while (p)
	{
		printf("%d", p->x);
		p = p->urm;
	}
}

int main()
{
	int n, k, *v, nr = 0;
	nod *prim;
	prim = NULL;
	printf("n="); 
	scanf("%d",&n);
	v = (int*)malloc(8 * sizeof(int));
	while (n) // impart numarul sa il obtin in baza 2
	{
		if (n % 2)
			k = 1;
		else k = 0;
		*(v + nr) = k; //il pun intr-un vector deoarece va trebui sa il inversez
		n = n / 2;
		nr++;
	}
	nr--; //scad un element pentru ca o sa am unul in plus
	while (nr>=0)
	{
		prim = adaugare(prim, *(v + nr));// o sa iau vectorul de la coada pentru fi numarul in baza 2
			nr--;
	}
	afisare(prim); // afisez nodurile listei
	system("pause");
	return 0;
}