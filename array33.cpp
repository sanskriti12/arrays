//product of two elements in an array..

# include<stdio.h>
# include<stdlib.h>
int main()
{
	int n,i,j;
	int x=6;
	int a[]={1,2,3,4,5,6};
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(a[i]*a[j]==x)
	printf("elements are %d and %d",a[i],a[j]);
	
		
	
	
}

