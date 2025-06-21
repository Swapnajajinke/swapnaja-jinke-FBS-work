void main()
{
	int n=12345;
	int lastdigit=n%10;
	int firstdigit,sum;
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	sum=firstdigit+lastdigit;
	printf("sum of first and last digit is %d",sum);
}