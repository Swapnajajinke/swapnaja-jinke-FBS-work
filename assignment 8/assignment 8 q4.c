#include<stdio.h>
void oddEven(int arr[],int size)
{
		printf("Even numbers are: ");
	for(int i = 0 ; i < size ; i++)
	{
	if(arr[i] % 2 == 0)
	    printf("%d ",arr[i]);
	}
	printf("\nodd numbers are: ");
	     for(int i=0;i<size;i++)
	{
	    if(arr[i] % 2 != 0)
		  printf("%d ",arr[i]);
	} 
}

void main()
{
	int arr[100],n;
	printf("Enter number of elements in the array:");
	scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }
	 oddEven(arr,n);
}

 
