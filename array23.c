//we have an array..frst we remove max element the min the max then min and go on repeating and at last find the left element...

# include<stdio.h>
# include<conio.h>

int partition(int a[],int start,int end)//for this we sort the array and then find the index of middle element
{
	int pivot,i,j,temp,rem;
	pivot=a[end];
	i=(start-1);
	for(j=start;j<end;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			
	
			
		}
		
	
	}
	rem=a[i+1];
	a[i+1]=a[end];
	a[end]=rem;
	return(i+1);
	
}


void quicksort(int a[],int start,int end)
{
	int i;
	
	if(start<end)
	{
		i=partition(a,start,end);
		quicksort(a,start,i-1);
		quicksort(a,i+1,end);
		
	}
	    
}

void print(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("%d",a[i]);
	printf("\n");
}


int left(int a[],int start,int end)
{

int index;
index=(start+end)/2;
printf("%d",a[index]); 


}


int main()
{
	int start,end;
	int a[]={5,2,3,1,8,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	quicksort(a,0,n-1);
	printf("sorted array is\n");
	print(a,n);
	left(a,0,n-1);

	
}


