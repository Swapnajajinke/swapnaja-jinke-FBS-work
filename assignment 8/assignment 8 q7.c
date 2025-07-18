#include<stdio.h>
void arraySum(int a[],int b[],int sum[],int size)
{

   for(int i = 0; i < size; i++){
	 sum[i] = a[i]+b[i];
}
}
void main()
	 {
	 int size;

	printf("Enter size");
	scanf("%d",&size);
	
	int a[size],b[size],sum[size];
	
	printf("Enter %d elements of first array :\n");
	for(int i = 0; i < size; i++)
	{
	     scanf("%d",&a[i]);
	 }
	 
	 	printf("Enter %d elements of second array :\n");
	for(int i = 0; i < size; i++)
	{
	     scanf("%d",&b[i]);
	 }
	arraySum(a,b,sum,size);
	 
	 printf("sum of arrays :");
	 for(int i = 0; i < size; i++){
	 printf("%d ",sum[i]);
}
}