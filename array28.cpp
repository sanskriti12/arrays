//print a 2d array in spiral order...


# include<stdio.h>
# include<conio.h>

void spiral(int a[4][4],int m,int n)
{
	int T=0;
	int B=m-1;
	int L=0;
	int R=n-1;
	int i;
	int dir=0;//initially
	while(T<=B && L<=R)
	{
		
		
			
			    if(dir==0)
			    {
				
				for(i=L;i<=R;i++)
				{
					printf("%d",a[T][i]);
				
				
					
				}
			        T++;
			        
					
			    }
			    else	if(dir==1)
				{
				
				for(i=T;i<=B;i++)
				{
					printf("%d",a[i][R]);
				
				
				} 
				  R--;
				    
					
			    }
			    
				else if(dir==2)
				{
				
				for(i=R;i>=L;i--)
				{
				
				printf("%d",a[B][i]);
			    
				
			     } 
				 B--;
			     
				
			    }
			    
			    else if(dir==3)
			    {
				
			    for(i=B;i>=T;i--)
			    {
			    	printf("%d",a[i][L]);
			    
			    	
			     } 
				 L++;
			     
			
			    }
			    dir=(dir+1)%4;
		
	}
}
int main()
{

	int a[4][4]={{1,2,3,4},
	              {5,6,7,8},
	              {3,9,5,4},
	              {1,4,5,6}};
				  
				  
													  
	spiral(a,4,4);
	return 0;
	
}

