#include<stdio.h>
void main()
{
	int arr[10];
	int n , i , j ;
	int isPrime;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	 printf("prime numbers in array: ");
	 for(i = 0 ; i < n ; i++)
	 {
	 	if(arr[i] < 2)
	 	continue;
	 }
	 isPrime=1;
	 for( j = 2 ; j <= arr[i]/2; j++)
	 {
	 	if(arr[i] % j==0)
	 	{
	 		isPrime = 0;
	 		break;
		 }
	 }
	 if(isPrime)
	 printf("%d",arr[i]);
}