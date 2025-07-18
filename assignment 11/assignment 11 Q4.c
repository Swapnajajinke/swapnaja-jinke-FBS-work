#include<stdio.h>

void main()
{
    char str[100];
    char temp;

printf("Enter a string: ");
    scanf("%s", str); 

    printf("Original string: %s\n", str);

  
    if (strlen(str) > 1)
	 {
     
        temp = str[0];
        str[0] = str[strlen(str) - 1];
        str[strlen(str) - 1] = temp;

        printf("String after swapping: %s\n", str);
    }
	 else
	  {
        printf("String should have at least 2 characters\n");
    }

    return 0;
}