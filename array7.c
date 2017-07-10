//Program to reverse an array

# include<stdio.h>
# include<conio.h>
void main()
{
	int a[5],i;
	printf("enter the elements\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse order is\n");
	for(i=4;i>=0;i--)
	printf("%d",a[i]);
}

