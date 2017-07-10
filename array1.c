//program to find the largest and smallest element in an array


# include<stdio.h>
int main()
{
	int a[50],size,big,small,i;
	printf("enter size of an array");
	scanf("%d",&size);
	printf("enter elements of an array");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	big=a[0];
	for(i=1;i<size;i++)
	{
		if(big<a[i])
		big=a[i];
	}
	printf("largest element in an array is %d",big);
	small=a[0];
	for(i=1;i<size;i++)
	{
		if(a[i]<small)
		small=a[i];
	}
	printf("smallest element is %d",small);
}

