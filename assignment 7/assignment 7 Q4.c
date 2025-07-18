#include<stdio.h>
void main()
{
	int arr[10];
	int n , i ;
	
	
	printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
 	printf("Even numbers are: ");
	for(int i = 0 ; i < n ; i++)
	{
	if(arr[i] % 2 == 0)
	    printf("%d",arr[i]);
	}
	printf("\nodd numbers are: ");
	     for(int i=0;i<n;i++)
	{
	    if(arr[i] % 2 != 0)
		  printf("%d",arr[i]);
	} 
}