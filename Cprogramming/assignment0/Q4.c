#include<stdio.h>
	void main()
{
		int x = 10, y = 20, temp;
		printf("x=%d,y=%d/n",x,y);
		temp=x;
		x=y;
		y=temp;
		printf("after swapping x=%d,y=%d/n",x,y);
	}
	
	
