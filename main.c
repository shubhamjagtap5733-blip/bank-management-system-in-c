/*
This project is developed purely for educational purposes.
"Farmers Bank" is a fictional bank name used only for demonstration.
This project has no association with any real banking institution.
*/
#include<stdio.h>
#include "info.h"
int main()
{
    bank Accounts;
    strcpy(Accounts.bank_name,"Farmers Bank");
    strcpy(Accounts.ifsc,"FMRB0001023");
    strcpy(Accounts.bank_add,"Kalamnuri, maharashtra");
    strcpy(Accounts.phone,"123456");
    Accounts.card=100010001000;
    Accounts.account=10000000000;
    Accounts.count=0;
   
    int n;
    while(1)
    {
        printf("1.Admin interface\n");
        printf("2.User\n");
        printf("3.Create Account\n");
        printf("4.Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 2:user(&Accounts);
           break;
        case 1:admin(&Accounts);
           break;
        case 3:create(&Accounts);
            break;
        case 4:return 0;
    }
    }
}
int user(bank *Accounts)
{
    printf("Login with phone number\n");
    int index=search(Accounts);
    if(index==-1)
    {
        printf("Invalid credential\n");
        return 0;
    }
    int n,n1;
    while(1)
    {
        printf("1.account information\n");
        printf("2.Edit\n");
        printf("3.card request\n");
        printf("4.card information\n");
        printf("5.check balance\n");
        printf("6.withdraw \n");
        printf("7.Deposit\n");
        printf("8.Exit\n");
        printf("enter a choice\n");
        scanf("%d",&n1);
        switch (n1)
        {
        case 1:passbook(Accounts,index);
            break;
        case 2:edit(Accounts,index);
            break;
        case 3:card_request(Accounts,index);
            break;
        case 4:card_info(Accounts,index);
            break;
        case 5: check_balance(Accounts,index);
            break;
        case 6:withdraw_by_card(Accounts,index);
            break;
        case 7:deposit(Accounts, index);
            break;
        case 8:return 0;
        }
    }
}
int admin(bank *Account)
{
    int n=0,n1;
    if((adminAuthentication())==0)
    {
        printf("Login Failed\n");
        return 0;
    }
    else{
        printf("Login successfully.\n");
    }
    
    while(1)
    {
        printf("1.view all account\n");
        printf("0.Exit\n");
        printf("enter a choice\n");
        scanf("%d",&n1);
        switch (n1)
        {
       
        case 1:viewAllaccounts(Account);
        break;
        
       case 0: return 0;
        }
    }
}
