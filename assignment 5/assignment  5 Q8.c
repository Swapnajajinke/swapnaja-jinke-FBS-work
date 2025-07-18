void main()
{
	int n=4;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int y=1;y<=2*i-1;y++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=n-1; i>=1;i--)
	{
		for (int j=1;j<=n-i;j++)
		{
		printf(" ");
	}
	for (int y=1;y <= 2*i-1;y++)
	{
	printf("*");
}
printf("\n");
}
}