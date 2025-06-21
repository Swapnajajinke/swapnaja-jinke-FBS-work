
void main()
{
	int n = 7;
	int i = 2;
	int prime = 1;
	if(n <= 1)
	{
		 prime=0;
	}
	else
	{
			while(i*i<=n)
			if(n%i==0)
			{
			prime==0;
			}
			i++;
	}
	if(prime)
	{
		printf("%d is a prime num",n);
	}
	else
	{
		printf("%d is not prime num",n);
	}

}