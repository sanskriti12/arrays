//Search an element in an unsorted array (Linear search)

# include<stdio.h>
int search(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	if(arr[i]==key)
	return i;
	return -1;
	
}
int main()
{
	int n;
	int arr[]={12,34,10,6,40};
	int key=40;
	int position=search(arr,n,key);
	if(position==-1)
	printf("not found");
	else
	printf("found");
}

