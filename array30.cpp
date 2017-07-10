//wap to find smallest immediate element..
# include<stdio.h>
# include<stdlib.h>



void print(int arr[],int n)
{
	int next,i,j;
	for(i=0;i<n-1;i++)
	{
		int next=0;
	    
		
		
			if(arr[i]<arr[i+1])
			{
				next=arr[i+1];
				printf("elements are %d and %d",arr[i],next);
				
				
			}
		
	
	}
	
}
int main()
{
	int arr[]={2,6,1,4,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	print(arr,n);
	return -1;
}

