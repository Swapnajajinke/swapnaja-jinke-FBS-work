#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int n;
	int i;
	 printf("Enter a string : ");
	 scanf("%s",str);
	 
	 printf("original string is %s : ",str);
	  
	printf("Enter the index of the characters to remove\n");
	
	scanf("%d",n);
	
	 if(n<0||n>=strlen(str))
{
	printf("invalid index");
}
return 1;
for(int i =n;str[i]!='\0';i++);
{
str[i]=str[i+1];
printf("String after removing the character\n",str);
return 0;
}
}