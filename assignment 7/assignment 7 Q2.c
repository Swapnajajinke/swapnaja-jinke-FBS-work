#include<stdio.h>
void main()
{
	int arr[50];
	int n , i;
	int num,found=0;
	
	printf("Enter number of Elements :");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	
	printf("Enter no to search");
	scanf("%d",&num);
	
	for(int i=0;i<n;i++)
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
		
