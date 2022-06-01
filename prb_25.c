#include <stdio.h>

void ceaser_cipher_decryption(char *, int);

int main()
{

    char message[200];
    int key;
    gets(message);
    scanf("%d", &key);

    ceaser_cipher_decryption(message, key);
    puts(message);

    return 0;
}

void ceaser_cipher_decryption(char *s, int key)
{

    int i = 0;
    char ch;
    while (s[i] != '\0')
    {

        if (s[i] >= 'a' && s[i] <= 'z')
        {

            ch = s[i] - key;
            if (ch < 'a')
            {

                ch = ch + 'z' - 'a' + 1;
            }
            s[i] = ch;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ch = s[i] - key;

            if (ch < 'A')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            s[i] = ch;
        }

        i++;
    }
}