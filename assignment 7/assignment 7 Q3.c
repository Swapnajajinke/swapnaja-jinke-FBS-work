#include<stdio.h>
void main()
{
	int arr[10];
	int n , i ;
	int sum = 0;
	  
	 printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
    
	for (int i=0 ; i<n ; i++){
	sum = sum+arr[i];
}
	
	printf("sum of elements in array is %d",sum);
}