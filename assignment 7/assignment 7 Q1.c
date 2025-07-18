#include<stdio.h>
void main()
{
	int min,max;
	int n , i;
	int arr[100];
	
	printf("Enter number of  Elements : ");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	 
	      min = max = arr[0];
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
		if(arr[i]<min)
		min=arr[i];
}
		printf("%d is minimum\n",min);
		printf("%d is maximum",max);
	}
	