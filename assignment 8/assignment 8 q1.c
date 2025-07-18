#include<stdio.h>
void arrayMinMax(int arr[],int size)
{
	int min,max;
	 min = max = arr[0];
	
	for(int i=1;i<size;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
		if(arr[i]<min)
		min=arr[i];
		
		printf("%d is minimum\n",min);
		printf("%d is maximum\n",max);
}
}
int main()
{
	int arr[50],n;
	
	printf("Enter number of  Elements : ");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	 arrayMinMax(arr,n);
	 return 0;
}
	