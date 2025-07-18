#include <stdio.h>

void main()
 {
    int num1, num2 ;
    char operations ;

    printf("enter first number: ");
    scanf("%d", &num1);

    printf("enter second number: ");
    scanf("%d", &num2);

    printf("enter an operator (+, -, *, /, % )");
    scanf(" %c", &operations ); 

    if (operations == '+')
	 {
        printf("Res = %d\n", num1 + num2);
    } 
	else if (operations == '-') 
	{
        printf("Res = %d\n", num1 - num2);
    }
	 else if (operations == '*')
	 {
        printf("Res = %d\n", num1 * num2);
    }
	 else if (operations == '/')
	 {
        if (num2 != 0)
		 {
            printf("Res = %d\n", num1 / num2);
        }
		 }
	 else
	  if (operations == '%') 
	 {
        if (num2 != 0) 
		{
            printf("Res = %d \n", num1 % num2);
        } 
    } 
	else
	 {
        printf("Invalid operator \n");
    }
}