#include <stdio.h>
void main()
 {
    int n;
    printf("Enter range ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
	 {
        int num = i;
        int sum = 0;
        
        for (int temp = num; temp > 0; temp /= 10)
		 {
            int digit = temp % 10;
            int fact = 1;
            
            for (int j = 1; j <= digit; j++)
			 {
                fact *= j;
            }

            sum += fact;
        }
        
        if (sum == i) {
            printf("%d is a Strong number\n", i);
        }
    }

    return 0;
}