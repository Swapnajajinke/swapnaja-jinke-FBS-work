#include<stdio.h>

void sumArray(int arr[],int size)
{
	int sum=0;
	
	for (int i=0 ; i<size ; i++)
	{
	sum = sum+arr[i];
}
printf("sum of array elements = %d",sum);
}
void main()
{
	int n; 
	int arr[100];
	
	 printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
   sumArray(arr,n);
	
}