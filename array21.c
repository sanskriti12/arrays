//find frst occurence of an element in a sorted array..

# include<stdio.h>
# include<stdlib.h>



int binarysearch(int a[],int n,int x)
{
	int low=0,high=n-1,result=-1;
	while(low<=high)
	{
		int mid;
		mid=(low+high)/2;
		if(a[mid]==x) 
		{
		
		result=mid;
		high=mid-1;//for search frst index
		
		}
		
		else if(x<a[mid])
		high=mid-1;
			
		else
		low=mid+1;
		
	
	}
	return result;
}
int main()
{
