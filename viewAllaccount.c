#include<stdio.h>
#include<string.h>
#include "info.h"
void viewAllaccounts(bank *viwe)
{
    int a=1;
    char str[20]={"shubham"},str2[20];
    while(1)
    {
        
        if(a==1)
        {
            printf("enter a passwd\n");
            a=2;
        }
        else{
            printf("Wrong Passed reenter\n");
        }
        scanf(" %s",str2);
        if(strcmp(str,str2)==0)
        {
             break;
        }

    }
    printf("--------------------------------------------------------------\n");
    printf("|Name                |Account NO.  |Mo.NO       |DOB         |\n");
    printf("---------------------------------------------------------------\n");
    for(int i=0;i<viwe->count;i++)
    {
        printf("|%-20s|%-13lu|%-12s|%-12s|\n",viwe->info[i].name,viwe->info[i].account,viwe->info[i].number,viwe->info[i].dob);
    printf("---------------------------------------------------------------\n");
    }
} 