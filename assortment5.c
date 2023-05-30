#include<stdio.h>
main()
{
	int c,i,j,a[100][100],transpose[100][100];
	printf("enter row size=");
	scanf("%d",&c);
	printf("eneter collum size=");
	scanf("%d",&c);
	printf("\nenter matrix element=");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nemnter matrix=\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d "[i],a[j]);
		}
		printf("\n");	
	}
	for(i=0;i<c;i++)
	{
		for (j=0;j<c;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	printf("\ntranspose of the matrix=");
	for(i=0;i<c;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
}
