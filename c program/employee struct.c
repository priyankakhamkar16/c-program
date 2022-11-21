#include<stdio.h>
struct employee
{
	int eid;
	char ename[20];
	float esalary;
};
main()
{
	struct employee e[10];
	int i,n;
	printf("\n enter no of records= ");
	scanf("%d",&n);
	printf("\n enter eid,ename,esalary= ");
	for(i=0; i<=n; i++)
	{
		scanf("%d%s%f", &e[i].eid,&e[i].ename,&e[i].esalary);
	}
	printf("\n eid \tename \tesalary");
	for(i=0; i<=n; i++)
	{
		printf("\n %d \t%s \t%f", e[i].eid,e[i].ename,e[i].esalary);
	}
}
