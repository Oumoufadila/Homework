Moussa Harouna Oumou Fadila
// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int n=atoi(&fraction[0]);
    int d=atoi(&fraction[3]);
    if(n>0&&de>0&&(d%2==0))
    {
        return (float) (n/d);
    }
    else
    {
        return 1;
    }
}
int frequency(string n)
{
    int c;
    char N=n[0];
    int O=n[strlen(n)- 1]- 48;
    if(N=='C')
    {
        c=1;
    }
    if(N=='D')
    {
        c=3;
    }
    if(N=='E')
    {
        c=5;
    }
    if(N=='F')
    {
        c=7;
    }
    if(N=='G')
    {
        c=9;
    }
    if(N=='A')
    {
        c=11;
    }
    if(N=='B')
    {
        c=13;
    }
    if(n[1]=='#')
    {
        c++;
    }
    if(n[1]=='b')
    {
        c--;
    }

/*
440*(2^(n/12))
*/
    float freq= 440 * (powf(2,(c- 10/ (float) 12)));
    return round (freq * (powf(2, O- 4)));
}

bool is_rest(string s)
{
    if(strcmp(s,"\0")==0)
    {return true;}
    else
    {return false;}
}
