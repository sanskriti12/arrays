//find point at which array is rotated in a sorted array or circularly sorted array..

# include<stdio.h>
# include<stdlib.h>
# include<math.h>
int countrotation(int a[],int n)
{
	int low,high=n-1;
	while(low<=high)
	{
		if(a[low]<=a[high])//sorted
		return low;
		int mid=(low+high)/2;
		int next=(mid+1)%n;//pivot property
		int prev=(mid+n-1)%n;
		if(a[mid]<=a[next] && a[mid]<=a[prev])//pivot rule
		return mid;
		else if(a[mid]<=a[high])
		high=mid-1;
		else if(a[mid]>=a[low])
		low=mid +1;
		
		
	}
	return -1;
}

int main()
{
	int a[]={15,22,23,28,3,5,6,8};
	int count=countrotation(a,8);
	printf("array is rotated %d times",count);
}

