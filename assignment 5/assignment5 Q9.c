void main()
 {
    int n = 4;
    for (int j = 1; j <= n; j++) 
	{
        printf("* ");
    }
    printf("\n");
    for (int i = 2; i < n; i++)
	 {
        printf("* ");
        for (int j = 2; j < n; j++)
		 {
            printf("  "); 
        }
        printf("* ");
        printf("\n");
    }
    for (int j = 1; j <= n; j++) 
	{
        printf("* ");
    }
    printf("\n");
}