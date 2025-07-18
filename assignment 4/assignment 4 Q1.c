#include <stdio.h>
void main()
 {
    int n;
    
    printf("Enter range");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
	 {
        int num = i;
        int count = 0, sum = 0;
        int temp;
        for (temp = num; temp > 0; temp = temp / 10) 
		{
            count++;
        }

        for (temp = num; temp > 0; temp = temp / 10)
		 {
            int digit = temp % 10;
            sum = sum + pow(digit, count);
        }
        
        if (sum == num)
		 {
            printf("%d is an Armstrong number\n", num);
        } 
	
    }

    return 0;
}