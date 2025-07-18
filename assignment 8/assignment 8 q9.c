#include<stdio.h>
void reverse(int arr[],int n)
{
	int i , temp;
	
	for(int i=0;i<n/2;i++)
	 {
	 temp=arr[i];
	 arr[i]=arr[ n-1-i];
	arr[n-1-i]= temp;
}
}
int main()
{
   int arr[100],n,i;
	
	printf("Enter size:");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(int i = 0; i < n; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	 reverse(arr,n);
	 
printf("reversed numbers are : ");
	for(int i = 0; i < n; i++)
	{
		printf(" %d",arr[i]);
	}
}
