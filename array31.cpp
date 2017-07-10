//Program to search for an element in a rotated sorted array


# include<stdio.h>
# include<stdlib.h>

int findpivot(int[],int,int);
int binarysearch(int[],int,int,int);
int pivotedbinarysearch(int a[],int n,int key)
{
	int pivot=findpivot(a,0,n-1);
	if(pivot==-1)
	return binarysearch(a,0,n-1,key);
	if(a[pivot]==key)
	return pivot;
	if(a[0]<=key)
	return binarysearch(a,0,pivot-1,key);
	
}
int findpivot(int a[],int low,int high)
{
	if(high<low)
	return -1;
	if(high==low)
	return low;
	int mid=(low+high)/2;
	if(mid<high && a[mid]>a[mid+1])
	return mid;
	if(mid>low && a[mid]<a[mid-1])
	return (mid-1);
	if(a[low]>=a[mid])
	return findpivot(a,low,mid-1);
	return findpivot(a,mid+1,high);
}
int binarysearch(int a[],int low,int high,int key)
{
	if(high<low)
	return -1;
	int mid=(high+low)/2;
	if(key==a[mid])
	return mid;
	if(key>a[mid])
	return binarysearch(a,(mid+1),high,key);
	return binarysearch(a,low,(mid-1),key);
	
}

int main()
{
	int a[]={5,6,7,8,9,1,2};
	int n=sizeof(a)/sizeof(a[0]);
	int key=1;
	printf("index=%d",pivotedbinarysearch(a,n,key));
	return 0;
}

