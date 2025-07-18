#include<stdio.h>
void main()
{
	char str [100];
	char ch;
	int found = 0;
	
	printf("Enter the string :");
	scanf("%s",str);
	
	printf("Enter a character to search :");
	scanf("%c",&ch);
	
	printf("Searching for  ''%c' in '%s' \n",str,ch);
	
	for(int i=0;str[i]!='\0';i++)
	{
	if (str[i]==ch)
{
 printf("Character '%c' found at position %d\n", ch, i + 1);
            found = 1;
        }
}
    if (!found) 
	{
        printf("Character '%c' not found in the string\n", ch);
    }
    return 0;
}