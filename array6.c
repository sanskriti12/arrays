//Rrogram to traverse an array

# include<stdio.h>
# include<conio.h>
void main()
{
	int n,i,a[20];
	printf("enter length of an array");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("traversing of the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

