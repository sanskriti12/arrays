//Program to reverse an array

# include<stdio.h>
# include<conio.h>
void main()
{
	int a[10],i,n;
	printf("enter size of an array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reversed array is");
	for(i=9;i>=0;i--)
	printf("%d",a[i]);
}

