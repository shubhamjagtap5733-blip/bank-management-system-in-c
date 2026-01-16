#ifndef INFO_H
#define INFO_H
#include<string.h>
#include<ctype.h>

typedef struct account
{
    char adhaar[20];        
    char name[100];
    char add[100];
    char gmail[100];
    char pan[20];
    char post[10];
    char dob[10];
    char number[12];
    char date[10];
    char passwd[10];
    unsigned long int money;
    unsigned long int account;
    unsigned long int card;
    
}account;
typedef struct bank_info
{
    char bank_name[100];
    char ifsc[30];
    char bank_add[100];
    char phone[7];
    unsigned long int account;
    account info[100];
    unsigned long int card;
    int count;

}bank;
void create(bank *open);
int adminAuthentication();
void viewAllaccounts(bank *);
void passbook(bank *,int);
void edit(bank *,int);
int user(bank *Accounts);
int admin(bank *Account);
int search(bank *account);
int card_info(bank *account,int index);
int card_request(bank *account,int index);
int check_balance(bank* account,int index);
int withdraw_by_card(bank *account,int index);
int deposit(bank *account, int index);
int gmail(bank *gmail,char *str);
int number(bank *number,char *str);
#endif