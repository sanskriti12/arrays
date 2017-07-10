//Program to update an element in an array

# include<stdio.h>
# include<conio.h>
void main()
{
	int a[5],i,j,n;
	printf("enter the elements of an array\n");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	printf("enter the position\n");
	scanf("%d",&j);
	if(j<0 && j>4)
	{
		printf("\n invalid position");
	}
	for(i=0;i<=4;i++)
	{
		if(i==j)
		{
			printf("enter the new element");
			scanf("%d",&n);
			a[j]=n;
		}
	}
	printf("now the elements are");
	for(i=0;i<=4;i++)
	printf("%d",a[i]);
}

