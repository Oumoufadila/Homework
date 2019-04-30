//Moussa Harouna Oumou Fadila
#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    if (argc !=2)
    {
        printf("Usage: crack <hash>");
        return 1;
    }


    const int letters_count = 53;

      string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];

    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] ='\0';

    char key_owner[5]= "\0\0\0\0\0";

        for (int fadi = 0; fadi< letters_count; fadi++)
        {
            for (int fadidi = 0; fadidi < letters_count; fadidi++)
            {
                for (int fadila = 0; fadila < letters_count; fadila++)
                {

                    for (int fadilat = 1; fadilat < letters_count; fadilat++)
                    {
                        key_owner[0] = letters[fadilat];
                        key_owner[1] = letters[fadila];
                        key_owner[2] = letters[fadidi];
                        key_owner[3] = letters[fadi];


                        if (strcmp(crypt(key_owner, salt), hash) == 0)
                        {
                            printf("%s\n" , key_owner);
                            return 0;
                        }
                    }
                }
            }
        }

    printf("Password ne doit pas etre cracker!");


    return 2;
}
