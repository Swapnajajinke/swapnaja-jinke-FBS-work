#include<stdio.h>
void main()
{
	int arr[10];
	int n , i ;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	 
	 printf("Alternate elements are :");
	 for(int i=0 ; i<n ; i = i+2)
	 printf("%d",arr[i]);
}