//Program to print elements of an array on screen

# include<stdio.h>
# include<conio.h>
void main()
{
	int a[100],i,n;
	printf("input range");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("input element");
		scanf("%d",&a[i]);
	}
	printf("elements are\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}

