#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5], i, j, t;
	clrscr();
	printf("enter 5 values:\n");
	for(i=0; i<5;i++)
		scanf("%d",&x[i]);
	printf("\nOriginalvalues are...");
	for(i=0;i<5;i++)
		printf("%d ",x[i]);
		for(i=0; i<=3;i++)
			for(j=i+1;j<=4;j++)
				if(x[i] < x[j])
				{
					t= x[i];
					x[i] = x[j];
					x[j] = t;
				}
	printf("\nSorted values:\n");
	for(i=0; i<5; i++)
	printf("%d ", x[i]);
	getch();
}