# include<stdio.h>
//Program to interchange odd position and even position of an array


# include<conio.h>
void main()
{
	int n,a[20],temp,i,j;
	printf("enter the size\n");
	scanf("%d",&n);
	if(n>20)
	{
		printf("invalid size");
	}
	for(i=0;i<n;i++)
	{
		printf("enter the numbers");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	printf("a[%d]=%d",i,a[i]);
	for(j=0;j<n-1;j=j+2)
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	printf("after interchanging even and odd positions");
	for(i=0;i<n;i++)
	printf("a[%d]=%d",i,a[i]);
}

