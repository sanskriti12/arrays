//Program for Binary Search

# include<stdio.h>
# include<conio.h>
void main()
{
	int arr[20],start,end,mid,n,i,data;
	printf("number of elements you want to enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elements\n");
		scanf("%d",&arr[i]);
		
	}
	printf("enter elemnt to be searched\n");
	scanf("%d",&data);
	start=0;
	end=n-1;
	mid=(start+end)/2;
	while(data!=arr[mid] && start<=end)
	{
		if(data>arr[mid])
		start=mid+1;
		else
		end=mid-1;
		mid=(start+end)/2;
	}
	if(data==arr[mid])
	printf("%d found at position %d\n",data,mid+1);
	if(start>end)
	printf("%d not found in array\n",data);
}
	
	
