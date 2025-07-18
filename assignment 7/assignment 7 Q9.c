void main()
{
	int arr[10];
	int n , i , j ;
	int temp;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(int i = 0; i < n; i++)
	{
	     scanf("%d",&arr[i]);
	 }
	 
	 for(int i=0;i<n/2;i++)
	 {
	 temp=arr[i];
	 arr[i]=arr[ n-1-i];
	arr[n-1-i]= temp;
}
printf("reversed numbers are : ");
	for(int i = 0; i < n; i++)
	{
		printf(" %d",arr[i]);
	}
}
