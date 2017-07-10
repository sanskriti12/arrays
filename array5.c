
//Write a program to generate fibonacci series

# include<stdio.h>
# include<conio.h>
void main()
{
	int a[50],n,i;
	printf("enter total number of terms");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++)
	a[i]=a[i-1]+a[i-2];
	printf("number of fibonacci terms\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}

