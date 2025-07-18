#include <stdio.h>

void replaceSpaces(char str[], char symbol)
 {
    for (int i = 0; str[i] != '\0'; i++)
	 {
        if (str[i] == ' ')
		 {
            str[i] = symbol;
        }
    }
}

int main() 
{
    char str[100];
    char symbol;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    printf("Enter a special symbol: ");
    scanf("%c", &symbol);

    printf("Original string: %s\n", str);

    replaceSpaces(str, symbol);

    printf("String after replacing spaces: %s\n", str);

    return 0;
}