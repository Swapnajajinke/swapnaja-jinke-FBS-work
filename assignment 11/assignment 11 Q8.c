#include<stdio.h>

int countWords(char str[]) 
{
    int count = 0;
    int words = 0;
    for (int i = 0; str[i] != '\0'; i++)
	 {
        if (isspace(str[i]))
		 {
            words = 0;
        } else if (!words) 
		{
            count++;
            words = 1;
        }
    }
    return count;
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int wordCount = countWords(str);

    printf("Number of words: %d\n", wordCount);

    return 0;
}