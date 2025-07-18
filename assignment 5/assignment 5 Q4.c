void main()
{
int n=5;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n-i;j++)
	{
		printf(" ");
}
  for(int a=1;a<=i;a++)
{
	printf("* ");
}
printf("\n");
}
}
