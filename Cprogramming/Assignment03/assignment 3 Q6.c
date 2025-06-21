void main()
{
	int n=28;
	int sum=0;
	int i=1;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==n)
	{
		printf("%d is perfect\n",n);
	}
	else
{
	printf("%d is not perfect\n",n);
}
}