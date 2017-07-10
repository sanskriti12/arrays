# include<stdio.h>
//Program to print elements of an array in 2D form

# include<conio.h>
void main()
{
	int a[4][4],i,j;
	printf("enter the elements\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements of 2D array are");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}






