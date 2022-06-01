#include <stdio.h>
#include <string.h>

int checkPalindrome(char *);

int main()
{
    char testString[100];
    gets(testString);

    if (checkPalindrome(testString))
    {
        printf("%s is Palindrome.. \n", testString);
    }
    else
    {
        printf("%s is Not Palindrome.. \n", testString);
    }

    return 0;
}

int checkPalindrome(char *s)
{

    int left = 0;
    int right = strlen(s) - 1;

    while (left <= (strlen(s) / 2))
    {
        if (s[left] != s[right])
        {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}