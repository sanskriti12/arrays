//Program to count positive and negative elements of an array

# include<stdio.h>
# include<conio.h>
void main()
{
	int a[50],n,neg=0,pos=0,i;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter elements of an array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		neg++;
		
		else
		pos++;
	
	}
	printf("negative elements of an array is",a[neg]);
	printf("positive elements of an array",a[pos]);
	
	
}

