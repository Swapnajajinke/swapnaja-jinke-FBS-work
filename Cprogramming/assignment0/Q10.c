#include<stdio.h>
void main()
{
	int phy,che,maths,eng,hindi,total,avg;
	phy=25;
	che=62;
	maths=35;
	eng=45;
	hindi=55;
	printf("enter marks of 5 subjects");
	printf("%d%d%d%d%d",phy,che,maths,eng,hindi);
	total=phy+che+maths+eng+hindi;
	printf("total marks = %d",total);
	avg=total/5;
	printf("avg marks = %d",avg);
}