# include<stdio.h>
# include<limits.h>
int maxsum(int a[],int n)
{
	int ans= INT_MIN;
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(ans<sum)
		ans=sum;
		if(sum<0)
		sum=0;
		
	}
	return ans;
}
int main()
{
	int a[]={-3,2,-5,7,6,-1,-4,11,-23};
	int n=sizeof(a)/sizeof(a[0]);
	int max=maxsum(a,n);
	printf("max sum is %d ",max);
	return 0;
}

