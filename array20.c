//find duplicates in an array..

# include<stdio.h>
# include<stdlib.h>
void repeat(int arr[],int n)
{

int i;
printf("repeating elements are");
for(i=0;i<n;i++)
{
	if(arr[abs(arr[i])]>=0)
	arr[abs(arr[i])]=-arr[abs(arr[i])];
	else
	printf("%d",abs(arr[i]));
}
}
int main()
{
	int arr[]={1,2,3,1,3,6,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	repeat(arr,n);
	return 0;
	
}

