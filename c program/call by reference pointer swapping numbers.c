#include<stdio.h>
void swap(int *a, int *b);
main()
{
	int a,b;
	printf("\n anter a and b= ");
	scanf("%d%d", &a,&b);
	swap(&a,&b);
}
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n after swapping a=%d and b=%d", *a,*b);
}
