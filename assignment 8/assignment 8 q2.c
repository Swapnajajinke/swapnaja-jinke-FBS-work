#include<stdio.h>
void searchNumber(int arr[],int size,int num)
{
	int found=0;
	for(int i=0;i<size;i++)
	{
		if (arr[i]==num)
		{
			found=1;
			break;
		}
	}
		if(found)
		{
			printf("number found");
		}
		else
		{
			printf("number not found");
		}
		}
	void main()
	{
	int arr[50];
	int n ,num;
	
	printf("Enter number of Elements :");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	
	printf("Enter no to search");
	scanf("%d",&num);
}
		
		