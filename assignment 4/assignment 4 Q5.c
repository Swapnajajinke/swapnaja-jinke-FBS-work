#include <stdio.h>
void main()
 {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n Menu:\n");
    printf("1. Check Even or Odd\n");
    
    printf("2. Check Prime or Not\n");
    
    printf("3. Check Palindrome or Not\n");
    
    printf("4. Check Positive, Negative, or Zero\n");
    
    printf("5. Reverse the Number\n");
    
    printf("6. Sum of Digits\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    if (choice == 1)
	 {
        if (num % 2 == 0)
            printf("%d is Even\n", num);
        else
            printf("%d is Odd\n", num);
    }

    else if (choice == 2)
	 {
        int isPrime = 1;
        if (num <= 1)
            isPrime = 0;
        for (int i = 2; i < num; i++)
		 {
            if (num % i == 0)
			 {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d is a Prime number\n", num);
        else
            printf("%d is not a Prime number\n", num);
    }

    else if (choice == 3)
	 {
        int original = num, reverse = 0, digit;
        while (num != 0)
		 {
            digit = num % 10;
            reverse = reverse * 10 + digit;
            num = num / 10;
        }
        if (reverse == original)
            printf("%d is a Palindrome\n", original);
        else
            printf("%d is not a Palindrome\n", original);
    }

    else if (choice == 4)
	 {
        if (num > 0)
            printf("%d is Positive\n", num);
        else if (num < 0)
            printf("%d is Negative\n", num);
        else
            printf("The number is Zero\n");
    }

    else if (choice == 5)
	 {
        int temp = num, rev = 0, digit;
        while (temp != 0) 
		{
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp + 10;
        }
        printf("Reversed number: %d\n", rev);
    }

    else if (choice == 6)
	 {
        int temp = num, sum = 0, digit;
        while (temp != 0)
		 {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp/10;
        }
        printf("Sum of digits: %d\n", sum);
    }

    else
	 {
        printf("Please select from 1 to 6\n");
    }

    return 0;
}