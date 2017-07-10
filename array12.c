# include<stdio.h>
//Program to concatenate two arrays

# include<conio.h>
# define max 50
void main()
{
	int a[5],b[5],c[10],i,j;
	printf("enter the frst array\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the second array\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=4;i++)
	c[i]=a[i];
	for(j=0;j<=4;j++)
	c[i++]=b[j];
	j=i;
	printf("after concatenation");
	for(i=0;i<j;i++)
	{
		printf("%d",c[i]);
	}
}


