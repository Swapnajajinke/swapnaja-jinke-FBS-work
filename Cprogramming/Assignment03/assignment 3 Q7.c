void main()
{
	int n=5;
	int factorial=1;
	int i=1;
	while(i<=n)
	{
		factorial=factorial*i;
		i++;
	}
	printf("factorial of %d is %d\n",n,factorial);
}