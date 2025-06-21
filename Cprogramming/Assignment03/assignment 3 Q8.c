void main()
{
	int n=145;
	int temp=n;
	int sum=0;
	while(temp>0)
	{
		int digit=temp%10;
		int f=1,i=1;
		while(i<=digit)
		{
			f=f*i;
			i++;
		}
		sum=sum+f;
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("%d is a strong no\n",n);
	}else
	{
		printf("%d is not a strong no",n);
	}
}