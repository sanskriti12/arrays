//find an element that occurs once in a sorted array with duplicates


void search(int *arr,int start,int end)
{
	if(start>end)
	return;
	if(start==end)
	{
		printf("req.element is %d",arr[start]);
		return;
	}
	int mid=(start+end)/2;
	if(mid%2==0)
	{
		if(arr[mid]==arr[mid+1])
		search(arr,mid+2,end);
		else
		search(arr,start,mid);
	}
	else
	{
		if(arr[mid]==arr[mid-1])
		search(arr,mid+1,end);
		else
		search(arr,start,mid-1);
	}
}
int main()
{
	int arr[]={1,1,3,3,4,5,5,7,7,8,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	search(arr,0,n-1);
}

