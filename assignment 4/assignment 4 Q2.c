#include <stdio.h>

void main()
 {
    int n;
    printf("Enter range ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
	 {
        int isPrime = 1;

        for (int j = 2; j < i; j++)
		 {
            if (i % j == 0)
			 {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
		 {
            printf("%d is a Prime number\n", i);
        }
    }

    return 0;
}