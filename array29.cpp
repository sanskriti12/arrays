//wap to check if an array is sorted or not...

# include<stdio.h>
# include<stdlib.h>
# define true 1
# define false 0

 
 
 int arraysort(int arr[],int n)
 {
 	if(n==0||n==1)
 	return true;
 	int i;
 	for(i=0;i<n;i++)
 	{
 		if(arr[i]<=arr[i-1])
 		return false;
	 }

 	
 	 return arraysort(arr,n-1);
 	
 }
 
 
 int main()
{
	int i,n,arr[]={12,3,88,92};
	 n= sizeof(arr)/sizeof(arr[0]);
	
      if(arraysort(arr,n))
      printf("yes");
      else
      printf("no");
	return 0;
}

