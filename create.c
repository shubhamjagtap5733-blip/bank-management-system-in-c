#include<stdio.h>
#include "info.h"
void create(bank *open)
{
    char gmail1[30],str1[12];
    int i=open->count;
    printf("fill the form: \n");
        printf("Enter a name: ");
        scanf(" %[^\n]",open->info[i].name);
        printf("Enter a full address: ");
        scanf(" %[^\n]",open->info[i].add);
        printf("Enter a gmail: ");
        scanf(" %s",gmail1);
        if((gmail(open,gmail1))==1)
        {
            strcpy(open->info[i].gmail,gmail1);
        }
        printf("Enter a mobile Number: ");
        scanf(" %s",str1);
        if((number(open,str1))==1)
        {
            strcpy(open->info[i].number,str1);
        }
         printf("Enter a aadhaar number: ");
        scanf(" %[^\n]",open->info[i].adhaar);
        printf("Enter a PAN card Number: ");
        scanf(" %s",open->info[i].pan);
        printf("Enter a post code: ");
        scanf(" %s",open->info[i].post);
        printf("Enter a DOB: ");
        scanf(" %[^\n]",open->info[i].dob);
        printf("Enter a current date: ");
        scanf(" %[^\n]",open->info[i].date);
        open->info[i].account= open->account;
        open->account+=23;

    int k=(open->count),j=0;
    while(open->info[k].pan[j])
    {
        if(open->info[k].pan[j]>='a'&&open->info[k].pan[j]<='z')
        {
            open->info[k].pan[j]-=32;
        }
        j++;
    }
    open->count++;
    printf("Account opening prosess completed\n");
}