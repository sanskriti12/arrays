# include<stdio.h>
//WAP to find the largest and second largest element of an array

int main()
{
	int a[50],size,big,sbig,i,loc;
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
		loc=i;
	}
	printf("largest element in an array is %d",big);
	sbig=0;
	int temp;
	if(loc!=size-1)
	{
	
	temp=a[size-1];
	a[size-1]=a[big];
	a[big]=temp;
    }
	for(i=0;i<size-1;i++)
	{
		if(sbig<a[i])
		sbig=a[i];
	}
	printf("second biggest element in an array is %d",sbig);
}

