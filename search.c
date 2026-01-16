#include<stdio.h>
#include "info.h"
int search(bank *account)
{
    char str[12];
    printf("enter a number\n");
    scanf(" %s",str);
    int i;
    for(i=0;i<account->count;i++)
    {
        if((strcmp(account->info[i].number,str))==0)
        {
            return i;
        }
    }
    return -1;
}