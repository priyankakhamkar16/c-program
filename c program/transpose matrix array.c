#include<stdio.h>
main()
{
	int a[3][3],b[3][3],i,j;
	printf("\n enter a matrix= ");
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
			printf("\t%d", b[i][j]);
		}
		printf("\n");
	}
}
