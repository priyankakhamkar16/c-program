#include<stdio.h>
main()
{
	int a=10;
	int *p;
	p=&a;
	printf("\n value=%d",a);
	printf("\n address=%u",&a);
	printf("\n p=%d",p);
	printf("\n address of p=%u", &p);
	printf("\n value of p= %d",*p);
	printf("\n value of p= %d",*(&a));
}
