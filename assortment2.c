#include<stdio.h>

main()
{
	int i,n,first,second,a[10000];
	printf("enter values of arrays=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		first=a[0];
		second=a[i];
	}
	else
	{
		first=a[i];
		second=a[0];
	}
	printf("second largest number in array");
	for(i=2;i<n;i++)
	{
		if(first<a[i])
		{
			second=first;
			first=a[i];
		}
		else if(second<a[i])
		{
			second=a[i];
		}
	}
	printf("%d",second);
	
		
 }
