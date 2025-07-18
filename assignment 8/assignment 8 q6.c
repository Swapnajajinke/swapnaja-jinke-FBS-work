#include<stdio.h>
void isPrime(int num)
{
if(num<2)
for(int i=2;i*i<=num;i++)
{
	if(num%i==0);
}	
}

void main()
{
int arr[100],n,i;

	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	 printf("prime numbers in array: ");
	 for(int i = 0 ; i < n ; i++)
	 if(isPrime)
	 printf("%d",arr[i]);
}