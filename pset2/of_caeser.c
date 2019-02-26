#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[])
{
    if (argc==2)
    {
        string of;

    //la cle pour avancer
    int k=atoi(argv[1]);

    //get the plaintex #
    of=get_string("plaintext");

    //de Ascii a alphabetical index
    printf("cypher text");

    for(int i=0; i<strlen(of); i++)
    if(isalpha(of[i]))
    {
        if(islower(of[i]))
        {
            //the first formula for miniscule
            printf("%c", (((of[i]-97)+k)%26)+97);
        }

        //the second formula if is maju
        if(isupper(of[i]))
        {
            printf("%c", (((of[i]-65)+k)%26)+65);
        }
        else
        {
            printf("%c",of[i]);
        }
        printf("\n");
    }
    return 0;
    }

}
