//Program to insert an element at a given position  in an array

# include<stdio.h>
int insert(int arr[],int n,int key,int capacity)
{

if (n>=capacity)
return n;
arr[n]=key;
return (n+1);
}
int main()
{
	int arr[20]={2,16,20,40,50,70};
	int capacity=sizeof(arr)/sizeof (arr[0]);
	int n=6;
	int i;
	int key=26;
	printf("before insertion");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	n=insert(arr,n,key,capacity);
	printf("after insertion");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	return 0;
	
}

