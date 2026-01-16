#include<stdio.h>
#include<string.h>
#include "info.h"
void passbook(bank *passbook,int index)
{
    
    
    printf("\n");
    printf("|-----------------------------------------------------------------------------|\n");
    printf("|Name        :-%-30s|Account NO.    :-%-14lu|\n",passbook->info[index].name,passbook->info[index].account);
    printf("|Gmail       :-%-30s|Phone NO.      :-%-14s|\n",passbook->info[index].gmail,passbook->info[index].number);
    printf("|PAN Card    :-%-30s|DOB            :-%-14s|\n",passbook->info[index].pan,passbook->info[index].dob);
    printf("|Bank Name   :-%-30s|Bank NO.       :-%-14s|\n",passbook->bank_name,passbook->phone);
    printf("|IFSC Code   :-%-30s|POST code      :-%-14s|\n",passbook->ifsc,passbook->info[index].post);
    printf("|Address Bank:-%-30s|AC opening Date:-%-14s|\n",passbook->bank_add,passbook->info[index].date);
    printf("|-----------------------------------------------------------------------------|\n");
    printf("\n");
    return;
        
    
    printf("no account found\n");
}