#include <stdio.h>

void main() 
{
    int a, b, c;

    printf("Enter the three sides of a triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
	 {
    
        if (a == b && b == c) 
		{
            printf("The triangle is Equilateral \n");
        }
		 else if (a == b || b == c || a == c)
		 {
            printf("The triangle is Isosceles \n");
        }
		 else
		 {
            printf("The triangle is Scalene \n");
        }
    } 
	else
	 {
        printf("Invalid triangle \n");
    }

    return 0;
}