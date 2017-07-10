//Program to delete an element at a given position in an array

# include<stdio.h>
int search(int arr[],int key,int n);
int delete(int arr[],int n,int key)
{
	int pos=search(arr,key,n);
	if(pos==-1)
	{
		printf("element not found");
		return n;
	}
	int i;
	for(i=pos;i<n-1;i++)
	arr[i]=arr[i+1];
	return n-1;
	
}
int search(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	if(arr[i]==key)
	return 1;
	return -1;
	
}
int main()
{
	int i;
	int arr[]={10,50,30,40,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=30;
	printf("array before deletion\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	n=delete(arr,n,key);
	printf("array after deletion");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	return 0;
	
}
