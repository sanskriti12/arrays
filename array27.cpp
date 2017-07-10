//sum of array  elements..
# include<stdio.h>
# include<stdlib.h>
int main()
{
	int n,i,sum=0,arr[100];
	printf("enter the size of array\n");

	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		
		sum=sum+arr[i];
	}
	printf("sum of array elements are %d",sum);
}

