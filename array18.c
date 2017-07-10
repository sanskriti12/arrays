//Program to print the inverse of an array

# include<stdio.h>
# include<conio.h>
void main()
{
	int a[5],i,j,temp;
	printf("enter array\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;j=4;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("inverse array is");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	
}

