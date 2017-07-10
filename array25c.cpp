//find peak element of an array..peak element is only larger than its immediate neighbours

# include<stdio.h>
# include<stdlib.h>
int findpeak(int arr[],int low,int high,int n)
{
	int mid=high+low/2;
	if((mid==0||arr[mid-1]<=arr[mid]) && (mid==n-1||arr[mid+1]<=arr[mid]));
	else if(mid>0 && arr[mid-1]>arr[mid])
	return findpeak(arr,low,(mid-1),n);
	else
	return findpeak(arr,(mid+1),high,n);
	
}
int find(int arr[],int n)
{
	return findpeak(arr,0,n-1,n);
}
int main()
{
	int arr[]={1,3,20,4,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("index of peak element is %d",find(arr,n));
}

