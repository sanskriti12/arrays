//find last occurence of an element in sorted array..

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
		low=mid+1;//for search last
		
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
	int a[]={1,2,3,4,4,4,5,6};
	int x;
	printf("enter the number");
	scanf("%d",&x);
	int mid;
	
	int lastindex=binarysearch(a,8,x);
	printf("lastindex is %d",lastindex);

	
}


