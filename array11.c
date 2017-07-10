# include<stdio.h>
# include<conio.h>
//Program to print transpose of an array

void main()
{
	int A[3][3],B[3][3],i,j,m,n;
	printf("enter the limit ");
	scanf("%d",&n);
	printf("enter the limit");
	scanf("%d",&m);
	printf("enter the matrix A\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
			B[j][i]=A[i][j];
			
		}
	}
	printf("transpose of matrix A is");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",B[i][j]);
		}
		printf("\n");
	}
}


