#include<stdio.h>
#include "info.h"
int number(bank *number,char *str)
{
    int n=0,invalid=0;
    while(1)
    {
        if(invalid){
            printf("Enter a number again\n");
            scanf(" %s",str);
        }
        invalid++;
        int len=strlen(str),count=0,i=0;
        while(str[i])
        {
            int n1=isdigit(str[i]);
            if(n1==0)
            {
                count++;
                break;
            }
            i++;
        }
        if(count!=0)
        {
            printf("enter only digit\n");
            continue;
        }
        else if(len!=10)
        {
            printf("Enter a 10 digit number\n");
            continue;
        }
        if(str[0]<'6')
        {
            printf("number should start 6 to 9\n");
            continue;
        }
        int j=0;
        for(int i=0;i<number->count;i++)
        {
            if(strcmp(number->info[i].number,str)==0)
            {
                printf("number is already exists reEnter\n");
                j=2;
                break;
            }
            
        }
        if(j==0)
           return 1;
    }
}