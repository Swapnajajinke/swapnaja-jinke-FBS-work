#include<stdio.h>
void alternateArray(int arr[],int size)
{
	printf("Alternate elements in an array :");
	 for(int i=0 ; i<size ; i = i+2)
	 {
	 printf("%d",arr[i]);
}
}
	void main()
	 {
	int size;
	
	printf("Enter size");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter %d elements:\n",size);
	for(int i = 0 ; i < size ; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	 	alternateArray(arr,size);
}