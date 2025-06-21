void main()
{
	int n=159;
	int arm=0;
	int r,c;
	c=n;
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	    if (c==arm){
		 printf(" is armstrong");
	}
	else
	{
	printf(" is not armstrong");
}
	}
