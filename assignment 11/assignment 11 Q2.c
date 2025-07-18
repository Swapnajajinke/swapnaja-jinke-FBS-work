#include<stdio.h>
void main()
{
	char str[100];
	
	printf("Enter a string :");
	scanf("%s", str);
	
	printf("Original string is %s",str);
	
	for(int i=0 ; str[i]!='\0'; i++)
	{
     if	(str[i]=='a');
     {
		str[i]='$';
	
	  printf("String after replacement: %s\n", str);
}
}
    return 0;
}


