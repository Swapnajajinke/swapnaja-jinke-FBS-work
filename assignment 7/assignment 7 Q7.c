void main()
{
	int arr[100];
	int arr1[30],arr2[50],sum[40];
	int n,i;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	printf("Enter %d elements of first array :\n",n);
	for(int i = 0; i < n; i++)
	{
	     scanf("%d",&arr1[i]);
	 }
	 
	 	printf("Enter %d elements of second array :\n",n);
	for(int i = 0; i < n; i++)
	{
	     scanf("%d",&arr2[i]);
	 }
	 
	 for(int i = 0; i < n; i++)
	 sum[i] = arr1[i]+arr2[i];
	 
	 printf("sum of arrays :");
	 for(int i = 0; i < n; i++)
	 printf("%d ",sum[i]);
}