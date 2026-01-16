#include<stdio.h>
#include "info.h"
int card_request(bank *account,int index)
{
    account->info[index].card=account->card;
    account->card+=15;
    printf("Set card passwd, only digits\n");
    scanf(" %s",account->info[index].passwd);
    printf("card request successfully sent.\n");
    return 0;

}
int card_info(bank *account,int index)
{
    printf("Card no :- %ld\n",account->info[index].card);
    printf("Passwd   :- %s\n",account->info[index].passwd);
    return 0;
}
int deposit(bank *account, int index)
{
    int amount;
    printf("Enter a amount you want deposit\n");
    scanf("%d",&amount);
    if(amount<=0)
    {
        printf("Invalid amount\n");
        return 0;
    }
    account->info[index].money+=amount;
    printf("deposit successfully\n");
}
int withdraw_by_card(bank *account,int index)
{
    char str1[15];
    unsigned long int num;
    int n=0,k=0;
   
        printf("Enter card number\n");
        scanf("%ld",&num);
        if(num!=account->info[index].card)
        {
            printf("Invalid card number\n");
            return 0;
        }
        printf("enter a passwd\n");
        scanf(" %s",str1);
        if((strcmp(account->info[index].passwd,str1))!=0)
        {
            printf("Invalid passwd re enter\n");
            return 0;
        }
        int amount;
        printf("Enter a amount\n");
        scanf("%d",&amount);
        account->info[index].money-=amount;
        printf("Withdraw successfully\n");
        return 1; 

    
}
int check_balance(bank* account,int index)
{
    int n=0;
    char str[20];
    do
    {
        if(n==0)
        {
            printf("enter a number\n");
            n=2;
        }
        scanf(" %s",str);
        if((strcmp(str,account->info[index].number))!=0)
        {
            printf("invali number\n");
            continue;
        }
        printf("\n");
        printf("Acoount number:- %-14ld|Balance:- %-12ld|\n",account->info[index].account,account->info[index].money);
        printf("\n");
        return 0;
    } while (1);
    
}
